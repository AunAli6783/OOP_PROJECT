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

class validation
{
public:

    int studentCount = 0;
    validation() :studentCount(0) {}

    Student students[MAX_STUDENTS];


    int findStudent(int)const;
};

