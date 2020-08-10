//
// Created by Maikol Guzman on 8/2/20.
//
#include <iostream>
#include "Professor.h"
#include "Administrative.h"
#include "University.h"

int main() {

    Professor* profe1 = new Professor("Angelo", "Calvo", 7111, 50000, 47500 );

    Professor* profe2 = new Professor("Ariadna", "Chavarria ", 8639, 50000, 487516);

    Administrative* admin1 = new Administrative("Tiago", "Osorio", 7013, 51200);


    University* university = new University("Universidad Nacional");

    university->addAdministrative(admin1);
    university->addProfessor(profe1);
    university->addProfessor(profe2);

    cout<<profe1->toString()<<endl;
    cout<<profe2->toString()<<endl;
    cout<<admin1->toString();


    delete admin1;
    delete profe1;
    delete profe2;
    delete university;
}