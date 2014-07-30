#include "mainwindow.h"

MainWindow::MainWindow()
{
    Q_OBJECT;

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
        connect(githubAction, SIGNAL(triggered()), this, SLOT(openGithub()));
        QAction *aboutQtAction = new QAction("A propos de Qt", this);
        helpMenu->addAction(aboutQtAction);
        connect(aboutQtAction, SIGNAL(triggered()), qApp, SLOT(aboutQt()));


    //Main zone

    //ContactList (left part)
    QLabel *contactTitle = new QLabel(this);
        contactTitle->setText("<h3>Liste de vos contacts</h3>");

    QLabel *contact1 = new QLabel(this);
        contact1->setText("<strong>Adrien</strong><br><small>Connecté</small>");
        contact1->setStyleSheet("QWidget {background: #f8f8f8; padding:5px; margin:0; }");

    QLabel *contact2 = new QLabel(this);
        contact2->setText("<strong>Maxence</strong><br><small>Hors-ligne</small>");
        contact2->setStyleSheet("QWidget {background: #f8f8f8; padding:5px; margin:0; }");

    QFrame* lineH = new QFrame();
        lineH->setFrameShape(QFrame::HLine);
        lineH->setFrameShadow(QFrame::Sunken);

    QFrame* lineV = new QFrame();
        lineV->setFrameShape(QFrame::VLine);
        lineV->setFrameShadow(QFrame::Sunken);

    QVBoxLayout *contactList = new QVBoxLayout;
        contactList->addWidget(contactTitle);

        contactList->addWidget(contact1);
        contactList->addWidget(lineH);
        contactList->addWidget(contact2);
        contactList->addStretch(1);

    QLabel *content = new QLabel;


    //Main layout main zone
    QWidget *mainZone = new QWidget;

    QHBoxLayout *layout = new QHBoxLayout;
        layout->addLayout(contactList);

        layout->addWidget(lineV);
        layout->addStretch(1);


    QPushButton *blabla = new QPushButton("Test");
        layout->addWidget(blabla);


    mainZone->setLayout(layout);
    setCentralWidget(mainZone);
    this->resize(800, 600); // Default size
}

void MainWindow::openGithub()
{
    QDesktopServices::openUrl(QUrl("http://github.com/FreePostPas/chatOff"));
}
