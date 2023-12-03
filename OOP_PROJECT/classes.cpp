#include "classes.h"

using namespace std;

Student::Student() : name(""), studentID(0) {}

Student::Student(string _name, int _studentID)
{
    name = _name;
    studentID = _studentID;
}

Course::Course():courseName(""), enrolled(false) {}

Course::Course(string _courseName)
{
        courseName=_courseName;
        enrolled = false;
}