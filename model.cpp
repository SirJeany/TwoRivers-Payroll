#include "model.h"

Model::Model()
{
}

QStandardItemModel* Model::createModel(QObject* parent, int rows, int cols, int childNodes){
    QStandardItemModel* model = new QStandardItemModel(rows, cols, parent);

    for(int r = 0; r < rows; r++){
        for(int c = 0; c < cols; c++){
            QStandardItem* item = new QStandardItem();

            if(c == 0){
                for(int i = 0; i < childNodes; i++){
                    QStandardItem* child = new QStandardItem(
                                QString("Item %0").arg(i) );
                    item->appendRow(child);
                }
            }
            model->setItem(r, c, item);
        }
    }
    model->setHorizontalHeaderItem(0, new QStandardItem("First Name"));
    model->setHorizontalHeaderItem(1, new QStandardItem("Last Name"));

    return model;
}


QStandardItemModel* Model::createModel(QObject* parent, EmployeeList* empList){
    QList<Employee*> list = empList->returnList();
//    int childNodes = list.size(); // what is child nodes?
    int rows = list.size();
    QStandardItemModel* model = new QStandardItemModel(rows, COLS, parent);

    for(int r = 0; r < rows; r++){
        for(int c = 0; c < COLS; c++){
            QStandardItem* item = new QStandardItem();
            switch(c){
            case 0:
                item = new QStandardItem( list.at(r)->getFirstName() );
                break;
            case 1:
                item = new QStandardItem( list.at(r)->getLastName() );
                break;
            case 2:
                item = new QStandardItem( list.at(r)->getGender() );
                break;
            case 3:
                item = new QStandardItem( QString::number(list.at(r)->getAmosRating()) );
                break;
            case 4:
                item = new QStandardItem( QString::number(list.at(r)->getBonusRate()) );
                break;
            case 5:
                item = new QStandardItem( QString::number(list.at(r)->getDaysWorked()) );
                break;
            case 6:
                item = new QStandardItem( QString::number(list.at(r)->getRatePerDay()) );
                break;
            case 7:
                item = new QStandardItem( QString::number(list.at(r)->getSalary()) );
                break;
            case 8:
                item = new QStandardItem( QString::number(list.at(r)->getIncentive()) );
                break;
            case 9:
                item = new QStandardItem( QString::number(list.at(r)->getBonus()) );
                break;
            case 10:
                item = new QStandardItem( QString::number(list.at(r)->getDebt()) );
                break;
            case 11:
                item = new QStandardItem( QString::number(list.at(r)->getNetSalary()) );
                break;
            case 12:
                item = new QStandardItem( list.at(r)->getNotes() );
                break;
            }

//            if(c == 0){
//                for(int i = 0; i < childNodes; i++){
//                    QStandardItem* child = new QStandardItem(
//                                QString("Item %0").arg(i) );
//                    item->appendRow(child);
//                }
//            }
            model->setItem(r, c, item);
        }
    }

    model->setHorizontalHeaderItem(0, new QStandardItem("First Name"));
    model->setHorizontalHeaderItem(1, new QStandardItem("Last Name"));
    model->setHorizontalHeaderItem(2, new QStandardItem("Gender"));
    model->setHorizontalHeaderItem(3, new QStandardItem("Amos Rating"));
    model->setHorizontalHeaderItem(4, new QStandardItem("Bonus Rate"));
    model->setHorizontalHeaderItem(5, new QStandardItem("Days Worked"));
    model->setHorizontalHeaderItem(6, new QStandardItem("Rate Per Day"));
    model->setHorizontalHeaderItem(7, new QStandardItem("Salary"));
    model->setHorizontalHeaderItem(8, new QStandardItem("Incentive"));
    model->setHorizontalHeaderItem(9, new QStandardItem("Bonus"));
    model->setHorizontalHeaderItem(10, new QStandardItem("Debt"));
    model->setHorizontalHeaderItem(11, new QStandardItem("Net Salary"));
    model->setHorizontalHeaderItem(12, new QStandardItem("Notes"));

    return model;
}
