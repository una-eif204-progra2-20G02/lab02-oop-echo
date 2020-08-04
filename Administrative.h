//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include "Person.h"

class Administrative: public Person {

private:
  double monthlySalary;
public:
  Administrative();
  Administrative(double);
  Administrative(const string ="",const string = "", int = 0, double = 0.0);
  void setMonthlySalary(double);
  double getMonthlySalary();
  
};

#endif //LAB02_OOP_ADMINISTRATIVE_H
