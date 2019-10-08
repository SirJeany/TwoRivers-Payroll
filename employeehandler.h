#ifndef EMPLOYEEHANDLER_H
#define EMPLOYEEHANDLER_H

#include "EmployeeList.h"
#include "employeereader.h"
#include <QObject>
#include <iostream>

class EmployeeHandler : public QObject
{
    Q_OBJECT
public:
    explicit EmployeeHandler(QObject *parent = 0);
    //virtual ~EmployeeHandler(){}

    QString toString() const;
    QString toString(int i) const;
    QStringList toStringList(int i) const;// A stringlist of a specific employee at i.
    QStringList toStringList(bool gender) const;// returns a list of all male employees (true) or female (false)

    QVariant getInfoAt(int i, int j);

    int getNumberOfMen() { return empList->getNumberOfMen(); }
    int getNumberOfWomen() { return empList->getNumberOfWomen(); }

signals:

public slots:
    void addEmployee(QString fname, QString lname, bool g, double ar, double br, double dw, double rpd, double inc, double b, double debt, QString notes);
    bool writeToFile(QString fileName);
    bool writeToXMLFile(QString fileName);

    bool doRead(QString filename){ // for some reason this bugged out - cant be in .cpp
        QFile file (filename);

        EmployeeReader empHandler;
        QXmlSimpleReader xmlReader;
        QXmlInputSource source(&file);
        xmlReader.setContentHandler(&empHandler);

        bool success = xmlReader.parse(source);

        if(success){
            QList<Employee*> list = empHandler.getList();

            empList->clear();

            foreach(Employee * e, list){
                empList->addEmployee(e);
            }
        }
        else
            return false;

        return true;
    }

    bool doSimpleWrite(QString filename, QStringList empList, bool gender);

    EmployeeList* getList();

private:
    EmployeeList *empList;

};

#endif // EMPLOYEEHANDLER_H
