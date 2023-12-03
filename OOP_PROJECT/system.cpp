
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


void system::displayEnrolledStudents() const
{
    cout << "Enrolled Students:\n";
    for (int i = 0; i < studentCount; ++i) 
    {
        std::cout << "Student ID: " << students[i].studentID << ", Name: " << students[i].name << "\n";
    }
    cout << "\n";
}


void system::removeStudent()
{
    int studentID;

    cout << "Enter student ID to remove: ";
    cin >> studentID;

    int index = findStudent(studentID);

    if (index != -1) {
        // Shift elements to remove the student
        for (int i = index; i < studentCount - 1; ++i) 
        {
            students[i] = students[i + 1];
        }
        --studentCount;
        cout << "Student removed successfully.\n";
    }
    else
    {
        cout << "Student with ID " << studentID << " not found.\n";
    }
}

void system::editStudentDetails()
{
    int studentID;

    cout << "Enter student ID to edit details: ";
    cin >> studentID;

    int index = findStudent(studentID);

    if (index != -1)
    {
        cout << "Enter new name: ";
        cin >> students[index].name;
        cout << "Student details updated successfully.\n";
    }
    else
    {
        cout << "Student with ID " << studentID << " not found.\n";
    }
}