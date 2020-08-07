//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"

class University {

private:
    string name;
    Professor* professor;
    Administrative* administrative;
    vector<Professor*> professorList;
    vector<Administrative*> administrativeList;

public:
    University(const string = "", Professor* = NULL, Administrative* = NULL);
    string getName();
    void setName(string);
    Professor* getProfessor();
    void setProfessor(Professor*);
    //COmentario para merge

//Otro comentario

 
};


#endif //LAB02_OOP_UNIVERSITY_H
