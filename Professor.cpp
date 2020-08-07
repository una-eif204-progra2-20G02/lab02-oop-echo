//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"

Professor::Professor(const string fn, const string ln, int d, double ms, double cr) : Person(fn,ln,d){
  monthlySalary = ms;
  commissionRate = cr;
}

Professor::~Professor(){

}

double Professor::getMonthlySalary(){
  return monthlySalary;
}

void Professor::setMonthlySalary(double ms){
  monthlySalary = ms;
}

double Professor::getCommissionRate(){
  return commissionRate;
}

void Professor::setCommissionRate(double cr){
commissionRate = cr;
}

double Professor::salary() const{
  return monthlySalary + commissionRate;
}

string Professor::toString() const{
  stringstream s;
  s << "Monthly Salary: "<<monthlySalary<<"..."<<endl; 
  s << "Commission Rate: "<<commissionRate<<"..."<<endl;
  s << "Salary: "<<salary()<<endl;
  return s.str();
}