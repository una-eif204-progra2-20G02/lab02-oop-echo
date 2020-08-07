//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"
#include <iostream>
#include <sstream>


Person::Person(string _firstName, string _lastName, int _id){
  firstName= _firstName;
  lastName= _lastName;
  documentId= _id;

}

Person:: ~Person(){

}

//Métodos get

string Person:: getFirstName(){
  return firstName;
}

string Person:: getLastName(){
  return lastName;
}

int Person:: getDocumentId(){
  return documentId;
}

//Métodos set

void Person:: setFirstName(std::string _firstName){
  firstName= _firstName;
}

void Person:: setLastName(std::string _LastName){
  lastName= _LastName;
}

void Person:: setDocumentId(int _document){
  documentId= _document;

}

//Prueba