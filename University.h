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

    //Metodos de "Professor"
    Professor* getProfessor();
    void setProfessor(Professor*);
    void addProfessor(Professor*);
    vector<Professor*> getListProfessor();

    //Metodos de "Administrative"
    Administrative* getAdministrative;
    void setAdministrative(Administrative*);
    void addAdministrative(Administrative*);
    vector<Administrative*> getListAdministrative();


 
};


#endif //LAB02_OOP_UNIVERSITY_H
