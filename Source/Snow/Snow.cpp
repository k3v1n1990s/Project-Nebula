#include "Snow.h"
#include "Cuda/Functions.h"
#include "SnowSimulator.h"
#include <Scene/Scene.h>

Snow::Snow()
	: Component(1),// get rendered last
	  m_glVBO(0),
	  m_glVAO(0),
	  m_cellSize(0.02f),
	  m_particleCount(200000),
	  m_density(100.0f),
	  m_snowMaterial(1)
{
	m_particles.resize(m_particleCount);
	Q_ASSERT(initializeOpenGLFunctions());
}

Snow::Snow( float cellSize, uint particleCount, float density, uint snowMaterial )
	:Component(1),// get rendered last
	m_glVBO(0),
	m_glVAO(0),
	m_cellSize(cellSize),
	m_particleCount(particleCount),
	m_density(density),
	m_snowMaterial(snowMaterial)
{
	m_particles.resize(m_particleCount);
	Q_ASSERT(initializeOpenGLFunctions());
}

Snow::Snow( uint particleCount )
	: Component(1),// get rendered last
	m_glVBO(0),
	m_glVAO(0),
	m_cellSize(0.02f),
	m_particleCount(particleCount),
	m_density(100.0f),
	m_snowMaterial(1)
{
	m_particles.resize(m_particleCount);
	Q_ASSERT(initializeOpenGLFunctions());
}

Snow::~Snow()
{
	deleteBuffers();
}

void Snow::initialize()
{
	if (!m_actor)
	{
		qWarning() << "Snow component initialize failed. Needs to be attached to a Game Object first.";
		return;
	}
	installShader();
	voxelizeMesh();
	buildBuffers();
}

void Snow::reset()
{
	deleteBuffers();
	buildBuffers();
}

void Snow::installShader()
{
	m_renderingEffect = ParticleTechniquePtr(new ParticleTechnique("snow", ParticleTechnique::GENERAL));
	if (!m_renderingEffect->init()) 
	{
		qWarning() << "Snow rendering effect initializing failed.";
		return;
	}
}

void Snow::render( const float currentTime )
{
	m_renderingEffect->enable();
	m_renderingEffect->getShaderProgram()->setUniformValue("gWVP", 
		Scene::instance()->getCamera()->viewProjectionMatrix() * m_actor->getTransformMatrix());

 	glEnable(GL_VERTEX_PROGRAM_POINT_SIZE);
	glEnable( GL_POINT_SMOOTH );

	glBindVertexArray( m_glVAO );
	glDrawArrays( GL_POINTS, 0, m_particles.size() );
	glBindVertexArray( 0 );

	glDisable(GL_VERTEX_PROGRAM_POINT_SIZE);
	glDisable( GL_POINT_SMOOTH );
}

void Snow::clear()
{
	m_particles.clear();
	deleteBuffers();
}

bool Snow::hasBuffers() const
{
	return m_glVBO > 0;
}

void Snow::deleteBuffers()
{
	// Delete OpenGL VBO and unregister with CUDA
	if ( hasBuffers() ) 
	{
		glBindBuffer( GL_ARRAY_BUFFER, m_glVBO );
		glDeleteBuffers( 1, &m_glVBO );
		glDeleteVertexArrays( 1, &m_glVAO );
		glBindBuffer( GL_ARRAY_BUFFER, 0 );
	}
	m_glVBO = 0;
	m_glVAO = 0;
}

void Snow::buildBuffers()
{
	// Build OpenGL VAO
	glGenVertexArrays( 1, &m_glVAO );
	glBindVertexArray( m_glVAO );

	// Build OpenGL VBO
	glGenBuffers( 1, &m_glVBO );
	glBindBuffer( GL_ARRAY_BUFFER, m_glVBO );
	glBufferData( GL_ARRAY_BUFFER, m_particles.size()*sizeof(SnowParticle), m_particles.data(), GL_DYNAMIC_DRAW );

	std::size_t offset = 0; // offset within particle struct

	// Position attribute
	glEnableVertexAttribArray( 0 );
	glVertexAttribPointer( 0, 3, GL_FLOAT, GL_FALSE, sizeof(SnowParticle), (void*)offset );
	offset += sizeof(CUDAVec3);

	// Velocity attribute
	glEnableVertexAttribArray( 1 );
	glVertexAttribPointer( 1, 3, GL_FLOAT, GL_FALSE, sizeof(SnowParticle), (void*)offset );
	offset += sizeof(CUDAVec3);

	// Mass attribute
	glEnableVertexAttribArray( 2 );
	glVertexAttribPointer( 2, 1, GL_FLOAT, GL_FALSE, sizeof(SnowParticle), (void*)offset );
	offset += sizeof(GLfloat);

	// Volume attribute
	glEnableVertexAttribArray( 3 );
	glVertexAttribPointer( 3, 1, GL_FLOAT, GL_FALSE, sizeof(SnowParticle), (void*)offset );
	offset += sizeof(GLfloat);
	offset += 2*sizeof(CUDAMat3);

	// lambda (stiffness) attribute
	offset += 2*sizeof(GLfloat); // skip to material.xi
	glEnableVertexAttribArray(4);
	glVertexAttribPointer( 4, 1, GL_FLOAT, GL_FALSE, sizeof(SnowParticle), (void*)offset);
	offset += sizeof(GLfloat);

	glBindVertexArray( 0 );
	glBindBuffer( GL_ARRAY_BUFFER, 0 );

	if (m_renderingEffect)
		m_renderingEffect->setVAO(m_glVAO);
}

void Snow::voxelizeMesh()
{
	// get the model from the game object
	ModelPtr model = m_actor->getComponent("Model").dynamicCast<IModel>();
	if (!model)
	{
		qWarning() << "Snow component initialize failed. Needs a mesh representation.";
		return;
	}

// 	cudaGraphicsResource* cudaVBO = model->getCudaVBO();
// 	if (!cudaVBO)
// 	{
// 		qWarning() << "Snow component filling mesh failed. CUDA Graphics Resource hasn't been created for the mesh.";
// 		return;
// 	}
	
	Grid grid = model->getBoundingBox()->getGeometryShape().toGrid(m_cellSize);

	//fillMeshWithVBO(&cudaVBO, model->getNumFaces(), grid, m_particles.data(), m_particleCount, m_density, m_snowMaterial);
	fillMeshWithTriangles(model->getCudaTriangles().data(), model->getCudaTriangles().size(), grid, 
		m_particles.data(), m_particleCount, m_density, m_snowMaterial);

	// if the voxelization is ok, hide the model
	model->setRenderLayer(-1);

	// add this instance to the simulator
	SnowSimulator::instance()->addParticleSystem(*this);
	SnowSimulator::instance()->setGrid(grid);

	SnowGridPtr snowGrid = m_actor->getComponent("SnowGrid").dynamicCast<SnowGrid>();
	if (snowGrid) snowGrid->setGrid(grid);
}
