#pragma once
#include <QWidget>
#include <Scene/Scene.h>

namespace Ui {
	class HierarchyViewer;
}

class HierarchyWidget : public QWidget
{
	Q_OBJECT

public:
	HierarchyWidget(Scene* scene, QWidget *parent = 0);
	~HierarchyWidget();

private:
	Ui::HierarchyViewer *ui;
	Scene* m_scene;
	GameObject* m_currentObject;
	QAction* m_deleteAction;

	void readHierarchy(GameObject* go, QTreeWidgetItem* parentItem); // go through the game objects
	void resetHierarchy(GameObject* go); // reset every game object from the given one
	void clearTransformationArea();

private slots:
	void connectCurrentObject();
	void disconnectPreviousObject();
	void updateTransformation(QTreeWidgetItem* current, QTreeWidgetItem* previous);
	void resetSelectedObject();
	void renameGameObject(QTreeWidgetItem * item, int column);
	void deleteGameObject();
	void showMouseRightButton(const QPoint& point);

public slots:
	void updateObjectTree();
};

