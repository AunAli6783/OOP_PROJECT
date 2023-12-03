#include "classes.h"

using namespace std;

Student::Student() : name(""), studentID(0) {}

Student::Student(string _name, int _studentID)
{
    name = _name;
    studentID = _studentID;
}

int validation::findStudent(int studentID)const
{
    for (int i = 0; i < studentCount; ++i)
    {
        if (students[i].studentID == studentID)
        {
            return i;
        }
    }
    return -1; // Not found
}
