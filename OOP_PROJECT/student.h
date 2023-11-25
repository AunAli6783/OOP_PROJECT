#pragma once
#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int studentID;

    Student() : name(""), studentID(0) {}

    Student(string _name, int _studentID) 
    {
        name = _name;
        studentID = _studentID;
    }
};