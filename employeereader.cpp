#include "employeereader.h"
#include <iostream>

bool EmployeeReader::startDocument(){
    emp = NULL;
    return true;
}

bool EmployeeReader::startElement(const QString &namespaceURI, const QString &localName, const QString &qName, const QXmlAttributes &atts){
    Q_UNUSED(namespaceURI)
    Q_UNUSED(localName)
    Q_UNUSED(atts)

    if(qName == "Employee")
        empDetails.clear();
    return true;
}

bool EmployeeReader::characters(const QString &ch){
    if(!(ch.trimmed().isEmpty())){
        empDetails.append(ch);
    }
    return true;
}

bool EmployeeReader::endElement(const QString &namespaceURI, const QString &localName, const QString &qName){
    Q_UNUSED(namespaceURI)
    Q_UNUSED(localName)

    if(qName == "Employee"){
//        std::cout<<empDetails.at(12).toLocal8Bit().constData()<<std::endl;
        emp = new Employee(empDetails.at(0),// first name
                           empDetails.at(1),// last name
                           genderToBool(empDetails.at(2)),// gender
                           empDetails.at(3).toDouble(),// amos Rating
                           empDetails.at(4).toDouble(),// bonus rate
                           empDetails.at(5).toDouble(),// days worked
                           empDetails.at(6).toDouble(),// rate per day
                           empDetails.at(8).toDouble(),// incentive
                           empDetails.at(9).toDouble(),// bonus
                           empDetails.at(10).toDouble(),// debt
                           empDetails.at(12)// notes
                    );

        empList.append(emp);
    }

    return true;
}

bool EmployeeReader::endDocument(){
    return true;
}

QList<Employee*> EmployeeReader::getList() const{
    return empList;
}

bool EmployeeReader::genderToBool(QString genderStr){
    if(genderStr == "Male"){
        return true;
    }
    else return false;
}
