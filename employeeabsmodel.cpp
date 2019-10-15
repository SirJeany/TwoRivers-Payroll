#include "employeeabsmodel.h"

#include <QMessageBox>
#include <iostream>

EmployeeAbsModel::EmployeeAbsModel(QList<QAction *>, QObject *parent) :
    QAbstractTableModel(parent)
{
    std::cout<<"The wrong abstract model cntr is called"<<std::endl;
}

EmployeeAbsModel::EmployeeAbsModel(QObject *parent) :
    QAbstractTableModel(parent){
    empList = EmployeeList::getInstance();
    columns = 13;
}

QVariant EmployeeAbsModel::headerData(int section, Qt::Orientation orientation, int role) const{
//    std::cout<<"Section: " << QString::number(section).toLocal8Bit().constData() << "Role: " << QString::number(role).toLocal8Bit().constData() <<std::endl;

    if(role == Qt::DisplayRole){
        if(orientation == Qt::Horizontal){
            switch(section){
//            case 0: //to-do: resize column width. Implement checkable row.
//                return QString("Check");
            case 0:
                return QString("First Name");
            case 1:
                return QString("Last Name");
            case 2:
                return QString("Gender");
            case 3:
                return QString("Amos Rating");
            case 4:
                return QString("Bonus Rate");
            case 5:
                return QString("Days Worked");
            case 6:
                return QString("Rate Per Day");
            case 7:
                return QString("Salary");
            case 8:
                return QString("Incentive");
            case 9:
                return QString("Bonus");
            case 10:
                return QString("Debt");
            case 11:
                return QString("Net Salary");
            case 12:
                return QString("Notes");
            }
        }
    }
    return QVariant();
}

QVariant EmployeeAbsModel::data(const QModelIndex &index, int role) const{
    int row = index.row();
    if(row >= rowCount()) return QVariant();

    int col = index.column();
    if(col >= columnCount()) return QVariant();


    if(role == Qt::DisplayRole)
        return empList->getInfoAt(row, col);

    return QVariant();
}


bool EmployeeAbsModel::setData(const QModelIndex &index, const QVariant &value, int role){
    int row = index.row();
    if(row >= empList->size()) return false;

    int col = index.column();
    if(col >= columnCount()) return false;

    if(role == Qt::EditRole){
        QString newVal = empList->updateEmployee(row, col, value);

        std::cout<<"Updated: "<<newVal.toLocal8Bit().constData()<<std::endl;


    }
    QModelIndex changedIndx = createIndex(row, 1);
    emit dataChanged(changedIndx, changedIndx); //tells the view what to update
    return true;
}

/* - * - *
bool EmployeeAbsModel::setData(const QModelIndex &index, const QVariant &value, int role){
    if(role != Qt::EditRole) return false;

    int row = index.row();
    if((row < 0) | (row >= actions.size())) return false;

    QString str = value.toString();
    QKeySequence ks(str);
    QAction* previousAction = 0;

    if(ks != QKeySequence() ){
        foreach(QAction* act, actions){
            if(act->shortcut() == ks){
                previousAction = act;
                break;
            }
        }
    }

    if(previousAction != 0){
        QString error = tr("%1 is alread bound to %2").arg(ks.toString()).arg(previousAction->text());

        bool answer = QMessageBox::question(0, error, tr("%1 remove previos binding?").arg(error), QMessageBox::Yes, QMessageBox::No);

        if(!answer) return false;

        previousAction->setShortcut(QKeySequence());
    }

    actions[row]->setShortcut(ks);

    QModelIndex changedIndx = createIndex(row, 1);

    emit dataChanged(changedIndx, changedIndx); //tells the view what to update

    return true;
}
*/


Qt::ItemFlags EmployeeAbsModel::flags(const QModelIndex &index) const{
    return Qt::ItemIsEditable | QAbstractTableModel::flags(index);
}

bool EmployeeAbsModel::insertRows(int row, int count, const QModelIndex &parent){
//    beginInsertRows(parent, 0, 0); // required
    beginInsertRows(QModelIndex(), 0, 0);

    std::cout<<"Added "<<parent.data(Qt::EditRole).toString().toLocal8Bit().constData()<<" At: "<<row<<" . "<<count<<std::endl;

    endInsertRows();

    return true;
}
