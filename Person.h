#ifndef  Person_H
#define Person_H
#include <string>
#include<iostream>
using namespace std;
// Class definition for a classroom
class Person
{
public: 	     
    int Salary;
    string Name;
    Person();
    Person(int mySalary, string myName);
    void setName(string myName);
    string getName();
    void setSalary(int mySalary);
    int getSalary();
    ~Person();
};
#endif
