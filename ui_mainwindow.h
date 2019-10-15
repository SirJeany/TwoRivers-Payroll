/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd;
    QAction *actionAdd_File;
    QAction *actionCreate_Payslip;
    QAction *actionProduce_Individual_Payslip;
    QAction *actionMales_Payslip;
    QAction *actionFemales_Payslip;
    QAction *actionAll_Payslip;
    QAction *actionSet_Bonus_Multiplier;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *headingLabel;
    QFormLayout *formLayout;
    QLabel *setBonusRateLabel;
    QSpinBox *setBonusRateSpinBox;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_Employees;
    QPushButton *pushButton_PrintPayslip;
    QPushButton *writeToFileBtn;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuPrint;
    QMenu *menuType_Here;
    QMenu *menuProduce_Monthly_Payslip;
    QMenu *menuSettings;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1301, 524);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionAdd_File = new QAction(MainWindow);
        actionAdd_File->setObjectName(QStringLiteral("actionAdd_File"));
        actionCreate_Payslip = new QAction(MainWindow);
        actionCreate_Payslip->setObjectName(QStringLiteral("actionCreate_Payslip"));
        actionProduce_Individual_Payslip = new QAction(MainWindow);
        actionProduce_Individual_Payslip->setObjectName(QStringLiteral("actionProduce_Individual_Payslip"));
        actionMales_Payslip = new QAction(MainWindow);
        actionMales_Payslip->setObjectName(QStringLiteral("actionMales_Payslip"));
        actionFemales_Payslip = new QAction(MainWindow);
        actionFemales_Payslip->setObjectName(QStringLiteral("actionFemales_Payslip"));
        actionAll_Payslip = new QAction(MainWindow);
        actionAll_Payslip->setObjectName(QStringLiteral("actionAll_Payslip"));
        actionSet_Bonus_Multiplier = new QAction(MainWindow);
        actionSet_Bonus_Multiplier->setObjectName(QStringLiteral("actionSet_Bonus_Multiplier"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        headingLabel = new QLabel(centralWidget);
        headingLabel->setObjectName(QStringLiteral("headingLabel"));
        headingLabel->setTextFormat(Qt::RichText);
        headingLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(headingLabel);


        verticalLayout_2->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout->setVerticalSpacing(22);
        setBonusRateLabel = new QLabel(centralWidget);
        setBonusRateLabel->setObjectName(QStringLiteral("setBonusRateLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, setBonusRateLabel);

        setBonusRateSpinBox = new QSpinBox(centralWidget);
        setBonusRateSpinBox->setObjectName(QStringLiteral("setBonusRateSpinBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, setBonusRateSpinBox);


        verticalLayout_2->addLayout(formLayout);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setSortingEnabled(false);

        verticalLayout_2->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        comboBox_Employees = new QComboBox(centralWidget);
        comboBox_Employees->setObjectName(QStringLiteral("comboBox_Employees"));

        horizontalLayout_2->addWidget(comboBox_Employees);

        pushButton_PrintPayslip = new QPushButton(centralWidget);
        pushButton_PrintPayslip->setObjectName(QStringLiteral("pushButton_PrintPayslip"));

        horizontalLayout_2->addWidget(pushButton_PrintPayslip);

        writeToFileBtn = new QPushButton(centralWidget);
        writeToFileBtn->setObjectName(QStringLiteral("writeToFileBtn"));

        horizontalLayout_2->addWidget(writeToFileBtn);


        verticalLayout_2->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1301, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuPrint = new QMenu(menuBar);
        menuPrint->setObjectName(QStringLiteral("menuPrint"));
        menuType_Here = new QMenu(menuPrint);
        menuType_Here->setObjectName(QStringLiteral("menuType_Here"));
        menuProduce_Monthly_Payslip = new QMenu(menuPrint);
        menuProduce_Monthly_Payslip->setObjectName(QStringLiteral("menuProduce_Monthly_Payslip"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuPrint->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuFile->addAction(actionAdd);
        menuFile->addSeparator();
        menuFile->addAction(actionAdd_File);
        menuFile->addSeparator();
        menuFile->addAction(actionCreate_Payslip);
        menuFile->addSeparator();
        menuPrint->addAction(actionProduce_Individual_Payslip);
        menuPrint->addSeparator();
        menuPrint->addAction(menuProduce_Monthly_Payslip->menuAction());
        menuPrint->addAction(menuType_Here->menuAction());
        menuProduce_Monthly_Payslip->addAction(actionMales_Payslip);
        menuProduce_Monthly_Payslip->addAction(actionFemales_Payslip);
        menuProduce_Monthly_Payslip->addAction(actionAll_Payslip);
        menuSettings->addAction(actionSet_Bonus_Multiplier);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionAdd->setText(QApplication::translate("MainWindow", "Add Single", 0));
        actionAdd_File->setText(QApplication::translate("MainWindow", "Add File", 0));
        actionCreate_Payslip->setText(QApplication::translate("MainWindow", "Create Payslip (Not yet)", 0));
        actionProduce_Individual_Payslip->setText(QApplication::translate("MainWindow", "Produce Individual Payslip (Not implemented", 0));
        actionMales_Payslip->setText(QApplication::translate("MainWindow", "Men", 0));
        actionFemales_Payslip->setText(QApplication::translate("MainWindow", "Women", 0));
        actionAll_Payslip->setText(QApplication::translate("MainWindow", "All", 0));
        actionSet_Bonus_Multiplier->setText(QApplication::translate("MainWindow", "Set Bonus Multiplier (Not Implemented)", 0));
        headingLabel->setText(QApplication::translate("MainWindow", "Month", 0));
        setBonusRateLabel->setText(QApplication::translate("MainWindow", "Set Bonus Rate (Not used): ", 0));
        pushButton_PrintPayslip->setText(QApplication::translate("MainWindow", "Print Payslip", 0));
        writeToFileBtn->setText(QApplication::translate("MainWindow", "Write to File", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuPrint->setTitle(QApplication::translate("MainWindow", "Print", 0));
        menuType_Here->setTitle(QApplication::translate("MainWindow", "Save As (Not implemented)", 0));
        menuProduce_Monthly_Payslip->setTitle(QApplication::translate("MainWindow", "Produce Monthly Payslip", 0));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
