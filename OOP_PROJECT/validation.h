#pragma once
#include <iostream>
#include "classes.h"
#include "global.h"
using namespace std;

class validation
{
  public:

    int studentCount = 0;
    validation() :studentCount(0) {}

    Student students[MAX_STUDENTS];
    Course courses[MAX_COURSES];


    int findStudent(int)const;
};


