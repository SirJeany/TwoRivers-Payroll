#ifndef EMPLOYEELIST_H
#define EMPLOYEELIST_H
#include <QList>
#include <employee.h>
#include <QVariant>

class EmployeeList{
public:
    static EmployeeList* getInstance();
    void addEmployee(Employee* e);

    QString toString() const;
    QString toString(int i) const;
    QStringList toStringList(int i) const;
    QStringList toStringList(bool gender) const; // returns a list of all male employees (true) or female (false)

    QVariant getInfoAt(int i, int j); // Where i would be the row, j = column.

    QList<Employee*> returnList();
    void clear();

    int size() { return employeeList.size(); }

    int getNumberOfMen();
    int getNumberOfWomen();

    QString updateEmployee(int i, int j, const QVariant &val); // used in the model - updates specific employee data member.

private:
    QList<Employee*> employeeList;
    static EmployeeList* onlyInstance;
    EmployeeList();
};

#endif // EMPLOYEELIST_H
