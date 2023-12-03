#pragma once
#include <iostream>
#include "classes.h"
#include "validation.h"
using namespace std;

class system:public validation
{
 public:

	void displayEnrolledStudents()const;
	void addStudent();
	void removeStudent();
	void editStudentDetails();

};

