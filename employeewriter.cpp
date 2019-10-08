#include "employeewriter.h"
#include <cstring>

EmployeeWriter::EmployeeWriter()
{
    rootElement = doc.createElement("EmployeeList");
    doc.appendChild(rootElement);
}

void EmployeeWriter::addEmployeeToFile(Employee* emp){
    QDomElement idElement = doc.createElement("Employee");
    rootElement.appendChild(idElement);

    QDomElement fNameElement = doc.createElement("firstname"); //0
    QDomText fnameText = doc.createTextNode(emp->getFirstName());
    idElement.appendChild(fNameElement);
    fNameElement.appendChild(fnameText);

    QDomElement lNameElement = doc.createElement("lastname"); //1
    QDomText lnameText = doc.createTextNode(emp->getLastName());
    idElement.appendChild(lNameElement);
    lNameElement.appendChild(lnameText);

    QDomElement genderElement = doc.createElement("gender"); //2
    QDomText genderText = doc.createTextNode(emp->getGender());
    idElement.appendChild(genderElement);
    genderElement.appendChild(genderText);

    QDomElement amosRatingElement = doc.createElement("amos_rating"); //3
    QDomText amosRatingText = doc.createTextNode(QString::number(emp->getAmosRating()));
    idElement.appendChild(amosRatingElement);
    amosRatingElement.appendChild(amosRatingText);

    QDomElement bonusRateElement = doc.createElement("bonus_rate"); //4
    QDomText bonusRateText = doc.createTextNode(QString::number(emp->getBonusRate()));
    idElement.appendChild(bonusRateElement);
    bonusRateElement.appendChild(bonusRateText);

    QDomElement daysWorkedElement = doc.createElement("days_worked"); //5
    QDomText daysWorkedText = doc.createTextNode(QString::number(emp->getDaysWorked()));
    idElement.appendChild(daysWorkedElement);
    daysWorkedElement.appendChild(daysWorkedText);

    QDomElement ratePerDayElement = doc.createElement("rate_per_day"); //6
    QDomText ratePerDayText = doc.createTextNode(QString::number(emp->getRatePerDay()));
    idElement.appendChild(ratePerDayElement);
    ratePerDayElement.appendChild(ratePerDayText);

    QDomElement salaryElement = doc.createElement("salary"); //7
    QDomText salaryText = doc.createTextNode(QString::number(emp->getSalary()));
    idElement.appendChild(salaryElement);
    salaryElement.appendChild(salaryText);

    QDomElement incentiveElement = doc.createElement("incentive"); //8
    QDomText incentiveText = doc.createTextNode(QString::number(emp->getIncentive()));
    idElement.appendChild(incentiveElement);
    incentiveElement.appendChild(incentiveText);

    QDomElement bonusElement = doc.createElement("bonus"); //9
    QDomText bonusText = doc.createTextNode(QString::number(emp->getBonus()));
    idElement.appendChild(bonusElement);
    bonusElement.appendChild(bonusText);

    QDomElement debtElement = doc.createElement("debt"); //10
    QDomText debtText = doc.createTextNode(QString::number(emp->getDebt()));
    idElement.appendChild(debtElement);
    debtElement.appendChild(debtText);

    QDomElement netSalaryElement = doc.createElement("net_salary"); //11
    QDomText netSalaryText = doc.createTextNode(QString::number(emp->getNetSalary()));
    idElement.appendChild(netSalaryElement);
    netSalaryElement.appendChild(netSalaryText);

    QDomElement notesElement = doc.createElement("notes"); //12
    QDomText notesText = doc.createTextNode(emp->getNotes());
    idElement.appendChild(notesElement);
    notesElement.appendChild(notesText);
}

QDomDocument EmployeeWriter::getDoc() const{
    return doc;
}
