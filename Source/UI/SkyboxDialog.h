#pragma once
#include <QDialog>
#include <Scene/Skybox.h>
#include <QGraphicsView>

namespace Ui {
	class Dialog;
}

class SkyboxDialog : public QDialog
{
	Q_OBJECT

public:
	SkyboxDialog(Skybox* skybox, QWidget *parent = 0);
	~SkyboxDialog();

public slots:
	void setSkyboxTextures();

private:
	void unfoldSkybox();

	Ui::Dialog *ui;
	Skybox* m_skybox;
	QVector<QGraphicsView*> m_views;
};

