#include <iostream>
using namespace std;
#include "managementsystem.h"

void managementsystem::run()
{
    int choice;
    do {

        displayMainMenu();
        cout << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            enrolledStudentMenu();
            break;
        case 2:
            courseRegistrationMenu();
            break;
        case 3:
            attendanceMenu();
            break;
        case 4:
            marksMenu();
            break;
        case 5:
            courseWithdrawMenu();
            break;
        case 6:
            cout << "Exiting the system.\n";
            break;
        default:

            cout << "Invalid choice. Please enter a number between 1 and 6.\n";
            return;
        }

    } while (choice != 6);
}


void managementsystem::displayMainMenu()
{
    cout << "Main Menu\n";
    cout << "1- Enroll a student\n";
    cout << "2- Course Registration\n";
    cout << "3- Attendance\n";
    cout << "4- Marks\n";
    cout << "5- Course Withdraw\n";
    cout << "6- Exit\n";
    cout << "Press 1 to 6 to select an option: ";
}

void managementsystem::enrolledStudentMenu()
{

    int choice;

    do {
        cout << "1: Display already enrolled students" << endl;
        cout << "2: Add a Student" << endl;
        cout << "3: Remove a Student" << endl;
        cout << "4: Edit Student Detail" << endl;
        cout << "5: Back" << endl;

      
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            displayEnrolledStudents();
            break;
        case 2:
            addStudent();
            break;
        case 3:  
            removeStudent();
            break;
        case 4:
            editStudentDetails();
            break;
        case 5:
            void run();
            return;

        default:
            cout << "Invalid choice. Please enter a number between 1 and 5.\n";
        }

    } while (choice != 5);
}

void managementsystem::courseRegistrationMenu() {
    int choice;

    do {
        cout << "1: Display Available Courses" << endl;
        cout << "2: Register Course" << endl;
        cout << "3. Display Registered courses" << endl;
        cout << "4: Back" << endl;

        
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            displayAvailableCourses();
            break;
        case 2:
            registerCourse();
            break;
        case 3:
            displayEnrolledCourses();
            break;
        case 4:
            void run();
            return;

        default:
            cout << "Invalid choice. Please enter a number between 1 and 3.\n";
        }

    } while (choice != 4);
}

void managementsystem::courseWithdrawMenu() {
    int choice;

    do 
    {
        cout << "1: Enrolled Courses" << endl;
        cout << "2: Drop a Course" << endl;
        cout << "3: Back" << endl;

        
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            displayEnrolledCourses();
            break;
        case 2:
            dropCourse();
            break;
        case 3:
            void run();
            return;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 3.\n";
        }

    } while (choice != 3);
}


void managementsystem::attendanceMenu() {
    int choice;

    do 
    {
        cout << "1: Display Attendance (Subject wise)" << endl;
        cout << "2: Mark Attendance" << endl;
        cout << "3: Back" << endl;

        
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) 
        {
            // Add code for handling attendance options
        case 1:
            displayAttendance();
            break;
        case 2:
            markAttendance();
            break;
        case 3:
            void run();
            return;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 3.\n";
        }

    } while (choice != 3);
}

void managementsystem::marksMenu() {
    int choice;

    do 
    {
        cout << "1: Display Marks (Subject wise)" << endl;
        cout << "2: Assign Marks" << endl;
        cout << "3: Back" << endl;
        
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            // Add code for handling marks options
        case 1:
            displayMarks();
            break;
        case 2:
             assignMarks();
            break;
        case 3:
            void run();
            return;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 3.\n";
        }

    } while (choice != 3);
}



