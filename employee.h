#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>

class Employee
{
public:
    enum Gender {Male, Female};

    Employee();
    Employee(QString fn, QString ln, bool g, double ar, double br, int dw, double rpd, double incentive, double b, double dbt, QString notes);
    Employee(QString fn, QString ln, Gender g, double ar, double br, int dw, double rpd, double incentive, double b, double dbt, QString notes);

    void refresh(); //updates the salary, etc. if employee was updated.

    QString getFirstName();
    QString getLastName();
    QString getGender();
    double getAmosRating();
    double getBonusRate();
    int getDaysWorked();
    double getRatePerDay();
    double getSalary();
    double getIncentive();
    double getBonus();
    double getDebt();
    double getNetSalary();
    QString getNotes();

    void setFirstName(QString);
    void setLastName(QString);
    void setGender(QString);
    void setAmosRating(double);
    void setBonusRate(double);
    void setDaysWorked(int);
    void setRatePerDay(double);
    void setSalary(double);
    void setIncentive(double);
    void setBonus(double);
    void setDebt(double);
    void setNetSalary(double);
    void setNotes(QString);


    QString toString();

protected:
    QString fname;
    QString lname;
    Gender gender;
    double amosRating;
    double bonusRate;
    int daysWorked;
    double ratePerDay;
    double salary;
    double incentive;
    double bonus;
    double debt;
    double netSalary;
    QString notes;
};

#endif // EMPLOYEE_H
