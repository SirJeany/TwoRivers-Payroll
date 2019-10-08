#ifndef SIMPLEWRITER_H
#define SIMPLEWRITER_H

#include "employee.h"
#include <QTextStream>
#include <QFile>

class SimpleWriter
{
public:
    SimpleWriter();

    bool createSimpleFile(QString filename, QStringList empList, int size);

};

#endif // SIMPLEWRITER_H
