#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <vector>
#include <QMainWindow>
#include <QtWidgets>

class MainWindow : public QMainWindow
{

    Q_OBJECT

    public:
    MainWindow(std::vector<QString> usersList);

    public slots:
    void openGithub();
};

#endif // MAINWINDOW_H
