#pragma once

#include <iostream>
#include <string>
#include "global.h"
//#include "managementsystem.h"
using namespace std;

class Student
{
public:
    string name;
    int studentID;

    Student();
    Student(string, int);
};

class Course
{
public:
    string courseName;
    bool enrolled; // Track if the course is enrolled

    Course();
    Course(string);

};


