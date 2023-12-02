#pragma once
#include <iostream>
#include "student.h"
#include "global.h"
using namespace std;
class validation
{
public:
    int studentCount = 0;
    validation() :studentCount(0) {}

    Student students[MAX_STUDENTS];
    

	int findStudent(int)const;
};

