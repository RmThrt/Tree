#ifndef MAININTERFACE_H
#define MAININTERFACE_H
#include "tree.h"

#include <QMainWindow>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>
#include "treeinterface.h"
#include "personinterface.h"

class MainInterface : public QMainWindow, private Tree
{
    Q_OBJECT
public:
    MainInterface();
    void createActions();
    void createMenus();
    void createToolbar();
    //void displayTree(Tree tree);
	void DisplayTree();



public slots:
    void newTree();
    void newPerson();
    void createCurrentTree();
    void addCurrentPerson(std::shared_ptr<Person> currentPerson);


signals:
    void signalAddNewPerson();

private:
    QToolBar *toolBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionAddPerson;
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionQuit;
	std::shared_ptr<Tree> tree;
	std::shared_ptr<Person> person;
    TreeInterface *treeInterface;
    PersonInterface *personInterface;
	std::shared_ptr<QImage> picRead;
	QLabel *labelPicture;
	QLabel *labelName;
	

};

#endif // MAININTERFACE_H
