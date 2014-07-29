#include "mainwindow.h"

MainWindow::MainWindow()
{
    //Menu
    QMenu *fileMenu = menuBar()->addMenu("&Fichier");
        QAction *exportAction = new QAction("Exporter la conversation", this);
        fileMenu->addAction(exportAction);
        QAction *quitAction = new QAction("Quitter", this);
        fileMenu->addAction(quitAction);
        connect(quitAction, SIGNAL(triggered()), this, SLOT(close()));


    QMenu *contactMenu = menuBar()->addMenu("&Contact");
        QAction *addContactAction = new QAction("Ajouter un contact", this);
        contactMenu->addAction(addContactAction);
        QAction *modifyProfilAction = new QAction("Modifier mon profil", this);
        contactMenu->addAction(modifyProfilAction);

    QMenu *statMenu = menuBar()->addMenu("&Etat");
        QAction *onlineAction = new QAction("Connecté", this);
        onlineAction->setCheckable(true);
        statMenu->addAction(onlineAction);
        QAction *offlineAction = new QAction("Hors-ligne", this);
        offlineAction->setCheckable(true);
        statMenu->addAction(offlineAction);

    QMenu *helpMenu = menuBar()->addMenu("&Aide");
        QAction *githubAction = new QAction("Voir le projet [GitHub]", this);
        helpMenu->addAction(githubAction);
        QAction *aboutQtAction = new QAction("A propos de Qt", this);
        helpMenu->addAction(aboutQtAction);
        connect(aboutQtAction, SIGNAL(triggered()), qApp, SLOT(aboutQt()));

    //Main zone
    QWidget *mainZone = new QWidget;

    QLineEdit *nom = new QLineEdit;
    QLineEdit *prenom = new QLineEdit;
    QLineEdit *age = new QLineEdit;

    QFormLayout *layout = new QFormLayout;
    layout->addRow("Votre nom", nom);
    layout->addRow("Votre prénom", prenom);
    layout->addRow("Votre âge", age);

    mainZone->setLayout(layout);
    setCentralWidget(mainZone);
}
