#include "employee.h"
#include <iostream>

Employee::Employee()
{
    fname = "Jean";
    lname = "van Riet";
    gender = Male;
    amosRating = 5;
    bonusRate = 11;
    daysWorked = 20;
    ratePerDay = 23;
    salary = (daysWorked*ratePerDay) + (amosRating*bonusRate);
    incentive = 200;
    bonus = 400;
    debt = -300;
    netSalary = bonus + incentive + salary - debt;
    notes = "Hard worker";
}

Employee::Employee(QString fn, QString ln, bool g, double ar, double br, int dw, double rpd, double inc, double b, double dbt, QString n){
    fname = fn;
    lname = ln;
    gender = g? Male : Female;
    amosRating = ar;
    bonusRate = br;
    daysWorked = dw;
    ratePerDay = rpd;
    salary = (dw*rpd) + (amosRating*br);
    incentive = inc;
    bonus = b;
    debt = dbt;
    netSalary = bonus + incentive + salary - debt;
    notes = n;

//    std::cout<<"Fname in EMPLOYEE CNTR: "<<fname.toLocal8Bit().constData()<<std::endl;
}

Employee::Employee(QString fn, QString ln, Gender g, double ar, double br, int dw, double rpd, double inc, double b, double dbt, QString n){ //Constr with enum gender
    fname = fn;
    lname = ln;
    gender = g;
    amosRating = ar;
    bonusRate = br;
    daysWorked = dw;
    ratePerDay = rpd;
    salary = (dw*rpd) + (amosRating*br);
    incentive = inc;
    bonus = b;
    debt = dbt;
    netSalary = bonus + incentive + salary - debt;
    notes = n;
}

void Employee::refresh(){
    salary = (daysWorked*ratePerDay) + (amosRating*bonusRate);
    netSalary = bonus + incentive + salary - debt;
}

QString Employee::getFirstName() { return fname; }

QString Employee::getLastName() { return lname; }

QString Employee::getGender() { return gender == Male ? "Male" : "Female"; }

double Employee::getAmosRating(){ return amosRating; }

double Employee::getBonusRate() { return bonusRate; }

int Employee::getDaysWorked() { return daysWorked; }

double Employee::getRatePerDay() { return ratePerDay; }

double Employee::getSalary() { return salary; }

double Employee::getIncentive() { return incentive; }

double Employee::getBonus() { return bonus; }

double Employee::getDebt() { return debt; }

double Employee::getNetSalary() { return netSalary; }

QString Employee::getNotes() { return notes; }

void Employee::setFirstName(QString fn){
    fname = fn;
}

void Employee::setLastName(QString ln){
    lname = ln;
}

void Employee::setGender(QString g){
    g = g.toLower();
    if(g == "female")
        gender = Female;
    else gender = Male;
}

void Employee::setAmosRating(double ar){
    amosRating = ar;
}

void Employee::setBonusRate(double br){
    bonusRate = br;
}

void Employee::setDaysWorked(int dw){
    daysWorked = dw;
}

void Employee::setRatePerDay(double rpd){
    ratePerDay = rpd;
}

//void Employee::setSalary(double);

void Employee::setIncentive(double i){
    incentive = i;
}

void Employee::setBonus(double b){
    bonus = b;
}

void Employee::setDebt(double d){
    debt = d;
}

//void Employee::setNetSalary(double);

void Employee::setNotes(QString n){
    notes = n;
}


QString Employee::toString(){
    return  fname + " " +
            lname + "," +
           // getGender() + "," +
            QString::number(amosRating) + "," +
            QString::number(bonusRate) + "," +
            QString::number(daysWorked) + "," +
            QString::number(ratePerDay) + "," +
            QString::number(salary) + "," +
            QString::number(incentive) + "," +
            QString::number(bonus) + "," +
            QString::number(debt) + "," +
            QString::number(netSalary) + "," +
            notes;
}
