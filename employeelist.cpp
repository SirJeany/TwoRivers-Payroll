#include "employeelist.h"
#include <iostream>


EmployeeList::EmployeeList()
{
}

EmployeeList* EmployeeList::onlyInstance = NULL;

EmployeeList* EmployeeList::getInstance(){
    if(onlyInstance == NULL)
        onlyInstance = new EmployeeList;
    return onlyInstance;
}

void EmployeeList::addEmployee(Employee *e){
//    std::cout<<"First name: "<<e->getFirstName().toLocal8Bit().constData()<<std::endl;
    employeeList.append(e);
}

QString EmployeeList::toString() const{ // a visually good tostring - used for debugging.
    QString list = "Employees: \n";
    for(int i = 0; i < employeeList.size(); i++){
        list += (QString::number(i+1)) + ") " + employeeList.at(i)->toString() + "\n";
    }

    return list;
}

QString EmployeeList::toString(int i) const{
    QString list = "";

    if((i < 0) | (i > employeeList.size()))
        list = "Index out of range - EmployeeList.h";

    else{
        list = employeeList.at(i)->toString();
    }
    return list;
}

QStringList EmployeeList::toStringList(int i) const{
    QStringList list = employeeList.at(i)->toString().split(",");
    return list;
}


QStringList EmployeeList::toStringList(bool gender) const{ // returns a list of all male employees (true) or female (false)
    QStringList list;

    if(gender){ // if we want a list of all men:
        for(int i = 0; i< employeeList.size(); i++){
            if(employeeList.at(i)->getGender() == "Male"){
                list.append(toString(i));
//                list.append("\n");
            }
        }
    }
    else{ //all women:
        for(int i = 0; i< employeeList.size(); i++){
            if(employeeList.at(i)->getGender() == "Female"){
                list.append(toString(i));
//                list.append("\n");
            }
        }
    }

    if(list.isEmpty()) //Maybe there arent any men/women yet...
        list.append("There are no Men/Women - check the function or check that you selected the gender properly");


    return list;
}

int EmployeeList::getNumberOfMen(){
    int count = 0;
    foreach(Employee *e, employeeList){
        if(e->getGender() == "Male")
            count++;
    }
    return count;
}

int EmployeeList::getNumberOfWomen(){
    int count = 0;
    foreach(Employee *e, employeeList){
        if(e->getGender() == "Female")
            count++;
    }
    return count;
}

QVariant EmployeeList::getInfoAt(int i, int j){
    switch(j){
        case 0:
            return employeeList.at(i)->getFirstName();
        case 1:
            return employeeList.at(i)->getLastName();
        case 2:
            return employeeList.at(i)->getGender();
        case 3:
            return employeeList.at(i)->getAmosRating();
        case 4:
            return employeeList.at(i)->getBonusRate();
        case 5:
            return employeeList.at(i)->getDaysWorked();
        case 6:
            return employeeList.at(i)->getRatePerDay();
        case 7:
            return employeeList.at(i)->getSalary();
        case 8:
            return employeeList.at(i)->getIncentive();
        case 9:
            return employeeList.at(i)->getBonus();
        case 10:
            return employeeList.at(i)->getDebt();
        case 11:
            return employeeList.at(i)->getNetSalary();
        case 12:
            return employeeList.at(i)->getNotes();
    }

    return "Not Found";
}

QList<Employee*> EmployeeList::returnList(){
    return employeeList;
}

void EmployeeList::clear(){
    qDeleteAll(employeeList);
    employeeList.clear();
}

QString EmployeeList::updateEmployee(int i, int j, const QVariant &val){
    if(val.toString().isEmpty()) return "Can't be empty - not updated.";

    QString oldVal = getInfoAt(i, j).toString();

    switch(j){
        case 0:
            employeeList.at(i)->setFirstName(val.toString());
            break;
        case 1:
            employeeList.at(i)->setLastName(val.toString());
            break;
        case 2:
            employeeList.at(i)->setGender(val.toString());
            break;
        case 3:
            employeeList.at(i)->setAmosRating(val.toDouble());
            break;
        case 4:
            employeeList.at(i)->setBonusRate(val.toDouble());
            break;
        case 5:
            employeeList.at(i)->setDaysWorked(val.toInt());
            break;
        case 6:
            employeeList.at(i)->setRatePerDay(val.toDouble());
            break;
        case 7:
            std::cout<<"Can't change Salary"<<std::endl;
            break;
        case 8:
            employeeList.at(i)->setIncentive(val.toDouble());
            break;
        case 9:
            employeeList.at(i)->setBonus(val.toDouble());
            break;
        case 10:
            employeeList.at(i)->setDebt(val.toDouble());
            break;
        case 11:
            std::cout<<"Can't change Net Salary"<<std::endl;
            break;
        case 12:
            employeeList.at(i)->setNotes(val.toString());
            break;
    }

    employeeList.at(i)->refresh(); // Updates the salary and net salary..

    return "Old value: " + oldVal + " ---- New value: " + val.toString();
}
