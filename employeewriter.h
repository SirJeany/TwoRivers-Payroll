#ifndef EMPLOYEEWRITER_H
#define EMPLOYEEWRITER_H

#include <QDomDocument>
#include "employee.h"

class EmployeeWriter
{
public:
    EmployeeWriter();
    void addEmployeeToFile(Employee *emp);
    QDomDocument getDoc() const;

private:
    QDomDocument doc;
    QDomElement rootElement;
};

#endif // EMPLOYEEWRITER_H
