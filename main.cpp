#include "mainwindow.h"
#include <QApplication>
#include "employeehandler.h"
//#include "createmodel.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();
//    w.activateWindow();
//    w.lower();

    return a.exec();
}
