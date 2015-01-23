#pragma once
#include <QObject>
#include <Utility/EngineCommon.h>
#include <Primitives/Material.h>

class MaterialManager : QObject
{
public:
	MaterialManager(GLuint programHandle, QObject* parent = 0);
	~MaterialManager();

	MaterialPtr getMaterial(const QString& name);

	MaterialPtr addMaterial(const QString& name, 
							const QVector4D& ambientColor,
							const QVector4D& diffuseColor,
							const QVector4D& specularColor,
							const QVector4D& emissiveColor,
							float shininess,
							float shininessStrength,
							int twoSided,
							int blendMode,
							bool alphaBlending,
							bool hasTexture);
	
	void deleteMaterial(MaterialPtr material);

	void clear();

private:
	QMap<QString, MaterialPtr> m_materials;
	GLuint m_programHandle;
};

