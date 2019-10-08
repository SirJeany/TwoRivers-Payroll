#ifndef EMPLOYEEREADER_H
#define EMPLOYEEREADER_H

#include <QXmlDefaultHandler>
#include <QStringList>
#include <QList>
#include "employee.h"

class EmployeeReader : public QXmlDefaultHandler
{
public:
    virtual ~EmployeeReader() {}
    bool startDocument();
    bool startElement(const QString &namespaceURI, const QString &localName, const QString &qName, const QXmlAttributes &atts);
    bool characters(const QString &ch);
    bool endElement(const QString &namespaceURI, const QString &localName, const QString &qName);
    bool endDocument();

    QList<Employee*> getList() const;

private:
    QList<Employee*> empList;
    Employee* emp;
    QStringList empDetails;

    bool genderToBool(QString genderStr);
};

#endif // EMPLOYEEREADER_H
