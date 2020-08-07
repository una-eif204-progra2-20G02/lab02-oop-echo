//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include "Person.h"

class Professor: public Person {

private:
double monthlySalary;
double commissionRate;

public:
Professor(const string ="", const string = "", int = 0, double = 0.0, double = 0.0);
virtual ~Professor();
double getMonthlySalary();
void setMonthlySalary(double);
double getCommissionRate();
void setCommissionRate(double);
double salary() const;
string toString() const;
};

#endif //LAB02_OOP_PROFESSOR_H
