
#include "system.h"

using namespace std;

void system::addStudent() 
{
    string name;
    int studentID;

    if (studentCount < MAX_STUDENTS) {
        cout << "Enter student name: ";
        cin >> name;

        // Assuming student IDs are unique for simplicity
        cout << "Enter student ID: ";
        cin >> studentID;

        // Check if the student is not already enrolled
        if (findStudent(studentID) == -1) {
            students[studentCount++] = Student(name, studentID);
            cout << "Student added successfully.\n";
        }
        else {
            cout << "Student with ID " << studentID << " is already enrolled.\n";
        }
    }
    else {
        cout << "Maximum number of students reached.\n";
    }
}