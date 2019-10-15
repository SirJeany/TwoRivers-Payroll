#include "employeehandler.h"
#include "employeewriter.h"
#include "simplewriter.h"
#include <QFile>
#include <QFileDialog>
#include <iostream>
#include <QMessageBox>
using namespace std;


EmployeeHandler::EmployeeHandler(QObject *parent) :
    QObject(parent)
{
    empList = EmployeeList::getInstance();
}

void EmployeeHandler::addEmployee(QString fname, QString lname, bool g, double ar, double br, double dw, double rpd, double inc, double b, double debt, QString notes){
    if(notes == ""){
        notes = "_";
    }
    Employee *e = new Employee(fname, lname, g, ar, br, dw, rpd, inc, b, debt, notes);
    empList->addEmployee(e);
}

QString EmployeeHandler::toString() const{
    return empList->toString();
}

QString EmployeeHandler::toString(int i) const{
    return empList->toString(i);
}

QStringList EmployeeHandler::toStringList(int i) const{
    return empList->toStringList(i);
}

QStringList EmployeeHandler::toStringList(bool gender) const{
    return empList->toStringList(gender);
}

QVariant EmployeeHandler::getInfoAt(int i, int j){
    return empList->getInfoAt(i, j);
}

//Write to Text file - useful for Looking at and producing final payrol slip?
bool EmployeeHandler::writeToFile(QString fileName){
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly)){
        std::cout<<"Could not open file for writing" << std::endl;
        return false;
    }
    QTextStream toFile(&file);
    QList<Employee*> eList = empList->returnList();
    for(int i = 0; i < eList.size(); i++){
        toFile << eList.at(i)->toString() << "\n";
    }
    file.close();
    return true;
}\

//Writes all Emplyoees to xml:
bool EmployeeHandler::writeToXMLFile(QString fileName){
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly)){
        std::cout<<"Could not open file for writing" << std::endl;
        return false;
    }

    QTextStream toXML(&file);
    QList<Employee*> eList = empList->returnList();
    EmployeeWriter writer;

    for(int i = 0; i < eList.size(); i++){
        writer.addEmployeeToFile(eList.at(i));
    }

    QDomDocument tempDoc = writer.getDoc();
    toXML << tempDoc.toString();

    file.close();

    return true;
}

//@program:
bool EmployeeHandler::doSimpleWrite(QString filename, QStringList empList, bool gender){
    SimpleWriter simple;
    int size = 0;
    if(gender) // if we want to prit men
        size = getNumberOfMen();
    else
        size = getNumberOfWomen();

    return simple.createSimpleFile(filename, empList, size);
}

EmployeeList* EmployeeHandler::getList(){
    return empList;
}



/*
bool doRead(QString filename){
    QFile file (filename);

    EmployeeReader empHandler;
    QXmlSimpleReader xmlReader;
    QXmlInputSource source(&file);
    xmlReader.setContentHandler(&empHandler);

    bool success = xmlReader.parse(source);

    if(success){
        QList<Employee*> list = empHandler.getList();

    }

    return true;
} */
