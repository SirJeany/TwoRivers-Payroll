#include "simplewriter.h"
#include <iostream>

SimpleWriter::SimpleWriter()
{

}

bool SimpleWriter::createSimpleFile(QString filename, QStringList empList, int size){
    QFile file(filename);

    std::cout<<"Printing simple payslip.."<<std::endl;

    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream m_stream(&file);
//        m_stream << ",";
        m_stream << empList.join(",\n");
        //Calculate totals - add excell logic:
        m_stream << QString("\n,=SUM(C5:C%1),=SUM(D5:D%1),=SUM(E5:E%1),=SUM(F5:F%1),=SUM(G5:G%1),=SUM(H5:H%1),=SUM(I5:I%1),=SUM(J5:J%1),=SUM(K5:K%1)").arg(size+4);
        return true;
    }
    else
        return false;
}
