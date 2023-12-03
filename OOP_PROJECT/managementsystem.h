#pragma once
#include <iostream>
#include "system.h"

using namespace std;

class managementsystem :public system
{
public:

    void run();
    void displayMainMenu();
    void enrolledStudentMenu();
    void courseRegistrationMenu();
    void  attendanceMenu();
    void marksMenu();
    void courseWithdrawMenu();
   
};



