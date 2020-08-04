//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"

Administrative::Administrative()
{
  this-> monthlySalary = 0.0;
}
Administrative::Administrative(const string firstName, const string lastName, int identi, double monthlySalary) : Person(firstName, lastName, identi)
{
  this->monthlySalary = monthlySalary;
}
Administrative::setMonthlySalary(double )
