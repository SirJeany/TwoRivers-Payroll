#include "mainwindow.h"
#include <QApplication>
#include "employeehandler.h"
//#include "createmodel.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QStandardItemModel* model = createModel(&a);

    MainWindow w;
    w.show();



//    EmployeeHandler handler;
//    handler.addEmployee();
//    handler.addEmployee();
//    handler.addEmployee();
//    handler.addEmployee();

//    handler.toString();

    return a.exec();
}
