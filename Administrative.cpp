//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"

Administrative::Administrative(const string firstName, const string lastName, int identi, double monthlySalary)
: Person(firstName, lastName, identi)
{
  this->monthlySalary = monthlySalary;
}
void Administrative::setMonthlySalary(double salary) { monthlySalary = salary; }

double Administrative::getMonthlySalary() const { return monthlySalary; }

string Administrative::toString() const {
    stringstream s;
    s<<"Administrative Information: "<<getFirstName()<<" "<<getLastName()<<endl;
    s<<"Doc. ID: "<<getDocumentId()<<", Monthly Salary: "<<getMonthlySalary()<<endl;
    return s.str();
}

double Administrative::salary() const { return monthlySalary; }
