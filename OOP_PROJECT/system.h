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
	Marks marks[MAX_STUDENTS]; 
	Course courses[MAX_COURSES];

	system();
	void displayEnrolledStudents()const;
	void addStudent();
	void removeStudent();
	void editStudentDetails();

	void displayAvailableCourses()const;
	void registerCourse();
	void displayEnrolledCourses()const;

	void displayAttendance()const;
	void markAttendance();

	void displayMarks();
	void assignMarks();

	void dropCourse();

	void readStudentData(string);
	void readCourseData(string);
};

