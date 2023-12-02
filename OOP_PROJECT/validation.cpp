#include "validation.h"


int validation:: findStudent(int studentID)const
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
