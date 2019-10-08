#ifndef MODEL_H
#define MODEL_H
#include <QStandardItemModel>
#include "EmployeeList.h"

const int COLS = 13;

class Model
{
public:
    Model();

    QStandardItemModel* createModel(QObject* parent, int rows, int cols, int childNodes);

    QStandardItemModel* createModel(QObject* parent, EmployeeList *empList);


private:
    EmployeeList* empList;
};

#endif // MODEL_H
