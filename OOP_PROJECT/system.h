#pragma once
#include <iostream>
#include "classes.h"
#include "validation.h"
using namespace std;

class system:public validation
{
 public:
	 Attendance attendance[MAX_STUDENTS];
	bool courseEnrollment[MAX_STUDENTS][MAX_COURSES];

	system();
	void displayEnrolledStudents()const;
	void addStudent();
	void removeStudent();
	void editStudentDetails();

	void displayAvailableCourses();
	void registerCourse();
	void displayEnrolledCourses();

	void displayAttendance();
};

