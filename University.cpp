//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"

University::University(const string nm, Professor * pp, Administrative * aa)
: name(nm), professor(pp), administrative(aa) { }

string University::getName() { return name; }

void University::setName(string _name) { name= _name; }

Professor* University::getProfessor()  {return professor; }

void University::setProfessor(Professor* professor1) { professor=professor1; }

void University::addProfessor(Professor * professor1) { professorList.push_back(professor1); }

void University::setAdministrative(Administrative * administrative1) { administrative = administrative1; }

void University::addAdministrative(Administrative * administrative1) { administrativeList.push_back(administrative1); }

vector<Administrative *> University::getListAdministrative()
{
    vector<Administrative*> administrativeListReturn;

    for (int cont = 0; cont < administrativeList.size(); cont++) {
        administrativeListReturn.push_back(administrativeList[cont]);
    }
    return administrativeListReturn;
}

vector<Professor *> University::getListProfessor()
{
    vector<Professor*> professorListReturn;

    for (int cont = 0; cont < administrativeList.size(); cont++) {
        professorListReturn.push_back(professorList[cont]);
    }
    return professorListReturn;
}
