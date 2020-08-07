//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"

string University::getName() {
    return name;
}

void University::setName(string _name) {
    name= _name;

}

Professor* University::getProfessor() {
    return professor;
}

void University::setProfessor(Professor* professor1) {
    professor=professor1;
}
