#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        MainWindow();

    public slots:
        void openGithub();
};

#endif // MAINWINDOW_H
