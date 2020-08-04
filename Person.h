
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H

#include <iostream>
#include<sstream>
using namespace std;


/**
 * Abstract Class of Person
 */
 
class Person {

  private:
  string firstName;
  string lastName;
  int documentId;

  public:
  Person();
  Person(string= "", string = "", int = 0);
  virtual ~Person();
  string getFirstName();
	string getLastName();
	string getDocumentId();
  void setFirstNanme(string);
  void setLastName(string);
  void setDocumentId(int);
  virtual dobule salary() = 0;
  


};


#endif //LAB02_OOP_PERSON_H
