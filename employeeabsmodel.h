#ifndef EMPLOYEEABSMODEL_H
#define EMPLOYEEABSMODEL_H

#include <QAbstractTableModel>
#include <QAction>
#include "EmployeeList.h"

class EmployeeAbsModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit EmployeeAbsModel(QList<QAction*>, QObject *parent = 0);
    explicit EmployeeAbsModel(QObject *parent = 0);

    int rowCount(const QModelIndex& = QModelIndex()) const { return empList->size(); }

    int columnCount(const QModelIndex& = QModelIndex()) const { return columns; }

    QAction* action(int row) const; // Not used..

    QVariant headerData(int section, Qt::Orientation orientation, int role  = Qt::DisplayRole) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    bool setData(const QModelIndex & index, const QVariant & value, int role = Qt::EditRole);
    Qt::ItemFlags flags(const QModelIndex &index) const;

    bool insertRows(int row, int count, const QModelIndex &parent);

private:
    QList<QAction*> actions;
    EmployeeList *empList;
    int columns;

signals:
    void editCompleted(const QStringList &);
public slots:
};

#endif // EMPLOYEEABSMODEL_H
