#pragma once
#include <iostream>
#include "menu.h"
using namespace std;

class managementsystem
{
public:
    void run()
    {

        int choice;

        do {

            displayMainMenu();
            cin >> choice;

            switch (choice) {
            case 1:
                //enrolledStudentMenu();
                break;
            case 2:
                // courseRegistrationMenu();
                break;
            case 3:
                //attendanceMenu();
                break;
            case 4:
                // marksMenu();
                break;
            case 5:
                //courseWithdrawMenu();
                break;
            case 6:
                cout << "Exiting the system.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6.\n";
            }

        } while (choice != 6);
    }



    
};


