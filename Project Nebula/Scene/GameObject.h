#pragma once
#include <Utility/DataTypes.h>

class GameObject : public QObject
{
	Q_OBJECT
	Q_PROPERTY(vec3 localSpeed READ localSpeed WRITE setSpeed)

public:
	GameObject();

	void setPosition(const QVector3D& positionVector);
	void setPosition(float x, float y, float z);
	void translateInWorld(const QVector3D& delta);

	void setRotation(const QVector3D& rotationVector);
	void setRotation(float x, float y, float z);
	void rotateInWorld(const QQuaternion& delta);

	void setScale(const QVector3D& scale);
	void setScale(float x, float y, float z);
	void setScale(float scaleFactor);

	void translateX(float x);
	void translateY(float y);
	void translateZ(float z);

	void rotateX(float x);
	void rotateY(float y);
	void rotateZ(float z);

	void scaleX(float x);
	void scaleY(float y);
	void scaleZ(float z);

	void setSpeed(const QVector3D& speed);
	void setSpeed(float x, float y, float z);

	const QVector3D& position() const;
	const QVector3D& rotation() const;
	const QVector3D& scale()    const;
	const QVector3D& localSpeed() const;
	const QVector3D& globalSpeed() const;

	const QMatrix4x4& modelMatrix();
signals:
	void synchronized();

public slots:
	void setObjectXPosition(int x);
	void setObjectYPosition(int y);
	void setObjectZPosition(int z);

	void setObjectXRotation(int x);
	void setObjectYRotation(int y);
	void setObjectZRotation(int z);

	void translateInWorld(const QString& paramString);
	void rotateInWorld(const QString& paramString);
	void rotateInWorldAxisAndAngle(const QString& paramString);
	void setLocalSpeed(const QString& paramString);

	void reset();

private:
	QVector3D m_position;
	QVector3D m_rotation;
	QVector3D m_scale;
	QVector3D m_speed;

	QMatrix4x4 m_modelMatrix;

	bool m_modelMatrixDirty;
};
