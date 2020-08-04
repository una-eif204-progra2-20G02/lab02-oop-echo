
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
  Person(string= "", string = "", int = 0);
  virtual ~Person();
  string getFirstName();
	string getLastName();
	int getDocumentId();
  void setFirstName(string);
  void setLastName(string);
  void setDocumentId(int);
  virtual double salary() const = 0;
  virtual string toString() const =0;
  


};


#endif //LAB02_OOP_PERSON_H
