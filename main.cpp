#include "mainwindow.h"
#include <vector>
#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    std::vector<QString> usersList;
    usersList.push_back(QString("Adrien"));
    usersList.push_back(QString("Maxence"));

    QApplication app(argc, argv);
    MainWindow window(usersList);
    window.show();

    return app.exec();
}
