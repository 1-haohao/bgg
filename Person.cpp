#include "Person.h"
#include <iostream>
#include<string>

using namespace std;

// implementation of the default Panda constructor
Person::Person(){};
Person::Person(int mySalary, string myName){
	Name=myName;
    Salary=mySalary;
}
void Person::setName(string myName){
    Name=myName;  
}
  string Person::getName()
  {
    return Name;
  };
  void Person::setSalary(int mySalary){
      Salary=mySalary;
  }
  int Person::getSalary(){
      return Salary;
  };
 Person::~Person(){};