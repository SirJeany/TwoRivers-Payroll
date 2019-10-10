#include "simplewriter.h"
#include <iostream>

SimpleWriter::SimpleWriter()
{

}

bool SimpleWriter::createSimpleFile(QString filename, QStringList empList, int size){
    QFile file(filename);

    std::cout<<"Printing simple payslip.."<<std::endl;

    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream m_stream(&file); //Open file for writing

        //Heading:
        m_stream << ",,Two River Farm Wages\n";
        m_stream << ",,(Date - Month)\n";
        m_stream << ",Men,Amos Rating,Bonus Rate,Days Worked,Rate Per Day,Salary,Incentive,Bonus,Debt,Net,Notes\n";

        m_stream << ",";
        //Content - Employees:
        m_stream << empList.join(",\n,");

        //Calculate totals - add excell logic:
        m_stream << QString("\n,,=SUM(C4:C%1),=SUM(D4:D%1), , ,=SUM(G4:G%1),=SUM(H4:H%1),=SUM(I4:I%1),=SUM(J4:J%1),=SUM(K4:K%1)").arg(size+3);
        return true;
    }
    else
        return false;
}
