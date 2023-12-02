#include "student.h"
//#include "managementsystem.h"
using namespace std;

Student::Student() : name(""), studentID(0) {}

Student::Student(string _name, int _studentID) 
{
    name = _name;
    studentID = _studentID;
}
