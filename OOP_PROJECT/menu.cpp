#include "menu.h"
#include "managementsystem.h"

void displayMainMenu()
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

void enrolledStudentMenu()
{

    int choice;

    do {
        cout << "1: Display already enrolled students" << endl;
        cout << "2: Add a Student" << endl;
        cout << "3: Remove a Student" << endl;
        cout << "4: Edit Student Detail" << endl;
        cout << "5: Back" << endl;

        cin >> choice;

        switch (choice) {
        case 1:
            //  displayEnrolledStudents();
            break;
        case 2:
            // addStudent();
            break;
        case 3:
            //removeStudent();
            break;
        case 4:
            //editStudentDetails();
            break;
        case 5:
            void run();
            return;

        default:
            std::cout << "Invalid choice. Please enter a number between 1 and 5.\n";
        }

    } while (choice != 5);
}

