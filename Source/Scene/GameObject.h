#pragma once
#include <Utility/EngineCommon.h>
#include <QSharedPointer>
#include <QElapsedTimer>

class AbstractModel;
class GameObject : public QObject
{
	Q_OBJECT
	Q_PROPERTY(bool moving READ isMoving WRITE setMoving)
	Q_PROPERTY(vec3 localSpeed READ localSpeed WRITE setSpeed)

public:
	GameObject(QObject* parent = 0);
	~GameObject();

	bool isMoving() const;
	void setMoving(bool status);

	void setPosition(const QVector3D& positionVector);
	void setPosition(double x, double y, double z);
	void translateInWorld(const QVector3D& delta);

	void setRotation(const QVector3D& rotationVector);
	void setRotation(double x, double y, double z);
	void rotateInWorld(const QQuaternion& delta);

	void setScale(const QVector3D& scale);
	void setScale(double x, double y, double z);
	void setScale(double scaleFactor);

	void setSpeed(const QVector3D& speed);
	void setSpeed(double x, double y, double z);

	QVector3D position() const;
	QVector3D predictedPosition() const;
	QVector3D rotation() const;
	QVector3D scale() const;
	QVector3D localSpeed() const;
	QVector3D globalSpeed() const;

	const QMatrix4x4& modelMatrix();

	void attachModel(QSharedPointer<AbstractModel> pModel);
	QSharedPointer<AbstractModel> getModel();

	enum MovingBehaviour
	{
		CONSECUTIVE,
		DISCRETE
	};

	void setMovingBehaviour(MovingBehaviour type);
	MovingBehaviour movingBehaviour() const;

signals:
	void synchronized();

public slots:
	void translateX(double x);
	void translateY(double y);
	void translateZ(double z);

	void rotateX(double x);
	void rotateY(double y);
	void rotateZ(double z);

	void scaleX(double x);
	void scaleY(double y);
	void scaleZ(double z);

	void translateInWorld(const QString& paramString);
	void rotateInWorld(const QString& paramString);
	void rotateInWorldAxisAndAngle(const QString& paramString);
	void setLocalSpeed(const QString& paramString);
	void resetSpeed();

	void calculateSpeed();

	void reset();

private:
	QVector3D m_position, m_prevPosition;
	QVector3D m_rotation;
	QVector3D m_scale;
	QVector3D m_speed;

	QMatrix4x4 m_modelMatrix;

	bool m_modelMatrixDirty;

	MovingBehaviour m_movingBehaviour;
	
	float m_time;
	QElapsedTimer m_lifeTimer;
	bool m_isMoving;
	QSharedPointer<AbstractModel> m_model;
};

