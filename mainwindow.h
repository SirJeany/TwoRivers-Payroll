#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QLabel>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QDate>
#include <QTime>
#include <QDoubleSpinBox>
#include <QSpinBox>
#include <QMessageBox>
#include <QComboBox>
#include <QRadioButton>
#include <QTextEdit>

#include "employeehandler.h"
#include "employeeabsmodel.h"
#include "model.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void addEmployee();

    void refreshTable(); //updates table after adding employee.

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

     //uses file to display all employees on table.

    void welcomePortal();

private slots:
    void on_actionAdd_triggered();

    void on_actionProduce_Text_File_triggered();

    void on_writeToFileBtn_clicked();

    void on_actionAdd_File_triggered();

    void on_tableView_activated(const QModelIndex &index);


    void on_actionProduce_Individual_Payslip_triggered();

    void on_actionMales_Payslip_triggered();

    void on_actionFemales_Payslip_triggered();

    void on_pushButton_PrintPayslip_clicked();

    void buildTable();

signals:
    void editCompleted();

private:
    Ui::MainWindow *ui;

    EmployeeAbsModel *myModel;

    QString currFileName;

    //Layout for adding the emplpoyee:
    QLabel *fnameLabel;     //labels
    QLabel *lnameLabel;
    QLabel *genderMaleLabel;
    QLabel *genderFemaleLabel;
    QLabel *amosLabel;
    QLabel *daysWorkedLabel;
    QLabel *ratePerDayLabel;
    QLabel *incentiveLabel;
    QLabel *debtLabel;
    QLabel *notesLabel;

    QLineEdit *fnameEdit;   //inputs
    QLineEdit *lnameEdit;
    QRadioButton *genderMaleRadiobtn;
    QRadioButton *genderFemaleRadiobtn;
    QDoubleSpinBox *amosEdit;
    QDoubleSpinBox *daysWorkedEdit;
    QDoubleSpinBox *ratePerDayEdit;
    QDoubleSpinBox *incentiveEdit;
    QDoubleSpinBox *debtEdit;
    QTextEdit *notesEdit;

    QPushButton *addBtn;    //buttons
    QPushButton *cancelBtn;
    //QPushButton *writeToFile;

    QWidget *addEmpForm;
    QGridLayout *gridLayout;


    // Welcome form:
    QWidget *welcomeWindow;
    QVBoxLayout *welcomeLayout;
    QGroupBox *welcomeGB;

    QLabel *welcomeLabel;
    QPushButton *launchAppBtn;


    EmployeeHandler handler; //Holds employee data to be entered into QTableView.
};

#endif // MAINWINDOW_H
