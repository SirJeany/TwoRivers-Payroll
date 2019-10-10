#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <qmessagebox.h>
#include <string>
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    buildTable(); //Take in existing data..
    ui->headingLabel->setText(currFileName);

//    cout<<"Hendler: "<<handler.toString().toLocal8Bit().constData();
      //Old model:

//    table_model = new Model();

//    ui->tableView->setModel(table_model->createModel(this, 4,3,2));
//    ui->tableView->setModel(table_model->createModel(this, handler.getList()));


    myModel = new EmployeeAbsModel(this);
    ui->tableView->setColumnWidth(1,20);

    ui->tableView->setModel(myModel);
    ui->comboBox_Employees->setModel(myModel);

    addBtn = new QPushButton(tr("Voeg By"));
    connect(addBtn, SIGNAL(clicked()), this, SLOT(addEmployee()));
//    connect(addBtn, SIGNAL(clicked()), myModel, SLOT(resetInternalData()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buildTable(){
    currFileName = QFileDialog::getOpenFileName(this,
                                                    tr("Vind lêer"),
                                                    QDir::currentPath(),
                                                    tr("XML Files (*.xml)"));

    if(currFileName.isEmpty())
        return;

    handler.doRead(currFileName);
//    ui->tableView->windowTitleChanged(currFileName);
}

void MainWindow::refreshTable(){
    ui->tableView->reset();

}

void MainWindow::addEmployee(){

    //Male or female?
    bool gender = true; //Male at this point
    if(!genderMaleRadiobtn->isChecked()){
        gender = false; // Female here
    }

    //Hardcode bonus and bonus rate for now:
    double bonus = 300;
    double bonusRate = ui->setBonusRateSpinBox->value();


    handler.addEmployee(fnameEdit->text(),
                        lnameEdit->text(),
                        gender,
                        amosEdit->value(),
                        bonusRate,
                        daysWorkedEdit->value(),
                        ratePerDayEdit->value(),
                        incentiveEdit->value(),
                        bonus,
                        debtEdit->value(),
                        notesEdit->toPlainText()
                        );

    addEmpForm->close();
    QMessageBox::information(addEmpForm, "Bygevoeg" , "\t\t\n" + fnameEdit->text());

    //Temp add employee to view:
    myModel->insertRow(ui->tableView->currentIndex().row(),QModelIndex());

    refreshTable();
}

void MainWindow::on_actionAdd_triggered()
{
    //return form to add employee.
    gridLayout = new QGridLayout;

    fnameLabel = new QLabel("Naam:");
    lnameLabel = new QLabel("van:");
    genderMaleLabel = new QLabel("Manlik:");
    genderFemaleLabel = new QLabel("Vroulik");
    amosLabel = new QLabel("Amos graad:");
    daysWorkedLabel = new QLabel("Dae gewerk:");
    ratePerDayLabel = new QLabel("Koers per dag:");
    incentiveLabel = new QLabel("Aansporing:");
    debtLabel = new QLabel("Skuld:");
    notesLabel = new QLabel("Notas:");

    fnameEdit = new QLineEdit();   //inputs
    lnameEdit = new QLineEdit();
    genderMaleRadiobtn = new QRadioButton(tr("Manlik"));
    genderMaleRadiobtn->setChecked(true);
    genderFemaleRadiobtn = new QRadioButton("Vroulik");
    amosEdit = new QDoubleSpinBox();
    daysWorkedEdit = new QDoubleSpinBox();
    ratePerDayEdit = new QDoubleSpinBox();
    incentiveEdit = new QDoubleSpinBox();
    debtEdit = new QDoubleSpinBox();
    notesEdit = new QTextEdit();

    //Set range values:
    amosEdit->setRange(0, 1000);
    daysWorkedEdit->setRange(0, 31);
    ratePerDayEdit->setRange(0, 500);
    incentiveEdit->setRange(0, 1000);
    debtEdit->setRange(0, 4000);

    //Some default value for testing:
    amosEdit->setValue(100);
    daysWorkedEdit->setValue(25);
    ratePerDayEdit->setValue(150);
    incentiveEdit->setValue(300);
    debtEdit->setValue(50);
    notesEdit->setText("Thhis s just a test case..");

         //buttons
    cancelBtn = new QPushButton("Kanselleer");

    gridLayout->addWidget(fnameLabel, 0, 0); //add the widgets to the layout
    gridLayout->addWidget(fnameEdit, 0, 1);
    gridLayout->addWidget(lnameLabel, 1, 0);
    gridLayout->addWidget(lnameEdit, 1, 1);
    gridLayout->addWidget(genderMaleRadiobtn, 2, 0);
    gridLayout->addWidget(genderFemaleRadiobtn, 2, 1);
    gridLayout->addWidget(amosLabel, 4, 0);
    gridLayout->addWidget(amosEdit, 4, 1);
    gridLayout->addWidget(daysWorkedLabel, 5, 0);
    gridLayout->addWidget(daysWorkedEdit, 5, 1);
    gridLayout->addWidget(ratePerDayLabel, 6, 0);
    gridLayout->addWidget(ratePerDayEdit, 6, 1);
    gridLayout->addWidget(incentiveLabel, 7, 0);
    gridLayout->addWidget(incentiveEdit, 7, 1);
    gridLayout->addWidget(debtLabel, 8, 0);
    gridLayout->addWidget(debtEdit, 8, 1);
    gridLayout->addWidget(notesLabel, 9, 0);
    gridLayout->addWidget(notesEdit, 9, 1);

    gridLayout->addWidget(addBtn, 10, 0);
    gridLayout->addWidget(addBtn, 10, 1);

    addEmpForm = new QWidget; //Create the main widget and add the layout
    addEmpForm->setWindowTitle("Voeg werker by");
    addEmpForm->resize(500, 300);

    addEmpForm->setLayout(gridLayout);
    addEmpForm->show();


//    connect(addBtn, SIGNAL(released()), addEmpForm, SLOT(close())); // Add validation in addEmployee()? and then close from there.
}

void MainWindow::on_actionProduce_Text_File_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Vind lêer"),
                                                    QDir::currentPath(),
                                                    tr("XML Files (*.xml)"));
    handler.writeToXMLFile(fileName);
}

void MainWindow::on_writeToFileBtn_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("Kies lêer"),
                                                    QDir::currentPath(),
                                                    tr("XML Files (*.xml)"));
    handler.writeToXMLFile(fileName);
}

void MainWindow::on_actionAdd_File_triggered()
{
    buildTable();
}

void MainWindow::on_tableView_activated(const QModelIndex &index)
{
    index.column();
}

void MainWindow::on_actionProduce_Individual_Payslip_triggered()
{
    std::cout<<"To implement - Have a checkable column next to each employee. That specific employee gets printed."<<std::endl;
    /*
    QString filename = QFileDialog::getSaveFileName(this,
                                                    tr("Save to"),
                                                    QDir::currentPath());

    QStringList as = handler.toStringList(true);
    handler.doSimpleWrite(filename, as);
    */
}



void MainWindow::on_actionMales_Payslip_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this,
                                                    tr("Save to"),
                                                    QDir::currentPath(),
                                                    tr("XLS Files (*.xls)"));

    QStringList as = handler.toStringList(true);
    handler.doSimpleWrite(filename, as, true);
}

void MainWindow::on_actionFemales_Payslip_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this,
                                                    tr("Save to"),
                                                    QDir::currentPath(),
                                                    tr("XLS Files (*.xls)"));

    QStringList as = handler.toStringList(false);
    handler.doSimpleWrite(filename, as, false);
}

void MainWindow::on_pushButton_PrintPayslip_clicked()
{
    std::cout<<"To implement - Prints out the employee currently selected in the combo box."<<std::endl;
}
