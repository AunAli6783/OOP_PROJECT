#include "validation.h"

using namespace std;

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


int validation ::findCourse(const string& courseName)const
{
    for (int i = 0; i < MAX_COURSES; ++i)
    {
        if (courses[i].courseName == courseName)
        {
            return i;
        }
    }
    return -1; // Not found
}


