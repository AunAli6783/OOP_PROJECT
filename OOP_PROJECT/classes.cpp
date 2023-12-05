#include "classes.h"

using namespace std;

Student::Student() : name(""), studentID(0) {}

Student::Student(string _name, int id)
{
    name = _name;
    studentID = id;
}

Course::Course():courseName(""), enrolled(false) {}

Course::Course(string cname)
{
        courseName=cname;
        enrolled = false;
}

Attendance::Attendance() : studentID(0), daysPresent(0) {}

Attendance::Attendance(int id, string cname, int present) 
{
    studentID = id;
    courseName = cname;
    daysPresent=present;
}