/****************************************************************************************************
Shera Adams
Southern New Hampshire University
Chada Tech Clock

The driver class runs on a while loop that executes the main menu on a switch where case 1 is add
hours, case 2 is add minutes, case 3 is add seconds and case 4 is exit the application.
****************************************************************************************************/

#include "Driver.h"
#include "Time.h"
#include "Clock.h"
#include "Permutations.h"
#include <iostream>
#include <iomanip>
// to use current time, disable warning 4996
#pragma warning(disable : 4996)
using namespace std;

// function objects
Clock clockFunctions;
Driver driver;
Permutations permutations;

void Driver::driver()
{
    // initialize variables
    bool acceptingInput = true;
    int userInput;
    int zero = 0;
    char colon = ':';
    string ampm = "A.M.";

    // get current time 
    time_t now = time(0);
    tm* ltm = localtime(&now);

    // assign the current time to variables
    int twelve = ltm->tm_hour;
    int twentyFour = ltm->tm_hour;
    int minutes = ltm->tm_min;
    int seconds = ltm->tm_sec;

    // determine how to save the variables in 12 and 24 hour format
    if (ltm->tm_hour > 12){ twelve = ltm->tm_hour - 12;}
    else{   twelve = ltm->tm_hour;}
    if (ltm->tm_hour > 12){ twelve = ltm->tm_hour - 12;}
    else{   twelve = ltm->tm_hour;}
    if (twentyFour >= 12){  ampm = "P.M.";}
    else{   ampm = "A.M.";}



    do
    {
        try
        {    // update the time
            Time Time(twentyFour, twelve, minutes, seconds, ampm);
            //print the time
            permutations.permutations(twentyFour, twelve, minutes, seconds, ampm);

            clockFunctions.menu();

            std::cin >> userInput;

            cout << endl;

            // exception handling and throw invalid input
            while (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(400, '\n');

                cout << "Invalid Choice. Please choose a valid menu option." << endl;

                continue;
            }
            if ((userInput > 5) || (userInput <= 0)){   throw (userInput);}
        }
        catch (...) {}

        switch (userInput)
        {
            // user can add hour manually
        case 1:

            clockFunctions.addHour(twentyFour, twelve, ampm);

            clockFunctions.addAmpm(twentyFour, twelve, minutes, seconds, ampm);
            break;

            // user can add minute manually 
        case 2:

            clockFunctions.addMinute(twentyFour, twelve, minutes, ampm);

            clockFunctions.addAmpm(twentyFour, twelve, minutes, seconds, ampm);

            break;

            // user can add second manually 
        case 3:


            clockFunctions.addSecond(twentyFour, twelve, minutes, seconds, ampm);

            clockFunctions.addAmpm(twentyFour, twelve, minutes, seconds, ampm);

            break;
        case 4:

            cout << "**********************************************************" << endl;
            cout << "*                Now Exiting Application                 *" << endl;
            cout << "**********************************************************" << endl;

            return;


        case 5:

            // only real times may be entered to jump to that time. Example 12:59:59 AM is not supported as this time does not exist

            std::cout << "*** Enter a time to jump (time must be a real 12 hour time) ***: " << endl;
            std::cout << "Enter Hours (12 hour time): " << endl;
            int userHours;
            try
            {
                std::cin >> userHours;
                cout << endl;

                // exception handling and throw invalid input
                while (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore(400, '\n');

                    cout << "Invalid Choice. Please choose a valid menu option." << endl;
                    clockFunctions.menu();
                    continue;
                }
            }
            catch (...) {}
            twelve = userHours;


            std::cout << "Enter Minutes: " << endl;
            int userMinutes;
            try
            {
                std::cin >> userMinutes;
                cout << endl;

                // exception handling and throw invalid input
                while (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore(400, '\n');

                    cout << "Invalid Choice. Please choose a valid menu option." << endl;
                    clockFunctions.menu();
                    continue;
                }
            }
            catch (...) {}
            minutes = userMinutes;

            std::cout << "Enter Seconds: " << endl;
            int userSeconds;
            try
            {
                std::cin >> userSeconds;
                cout << endl;

                // exception handling and throw invalid input
                while (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore(400, '\n');

                    cout << "Invalid Choice. Please choose a valid menu option." << endl;
                    clockFunctions.menu();
                    continue;
                }
            }
            catch (...) {}
            seconds = userSeconds;


            std::cout << "Enter 1 for Am or 2 for pm: " << endl;
            int userAmpm;
            try
            {
                std::cin >> userAmpm;
                cout << endl;

                // exception handling and throw invalid input
                while (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore(400, '\n');

                    cout << "Invalid Choice. Please choose a valid menu option." << endl;
                    clockFunctions.menu();
                    continue;
                }
            }
            catch (...) {}
            if (userAmpm == 1)
                ampm = "A.M.";
            else
                ampm = "P.M.";

            // define 24 hour time
            if ((twelve == 12) && (ampm == "A.M."))
            {
                twentyFour = 0;
            }

            if ((twelve == 1) && (ampm == "A.M.")) { twentyFour = 1; }
            if ((twelve == 2) && (ampm == "A.M.")) { twentyFour = 2; }
            if ((twelve == 3) && (ampm == "A.M.")) { twentyFour = 3; }
            if ((twelve == 4) && (ampm == "A.M.")) { twentyFour = 4; }
            if ((twelve == 5) && (ampm == "A.M.")) { twentyFour = 5; }
            if ((twelve == 6) && (ampm == "A.M.")) { twentyFour = 6; }
            if ((twelve == 7) && (ampm == "A.M.")) { twentyFour = 7; }
            if ((twelve == 8) && (ampm == "A.M.")) { twentyFour = 8; }
            if ((twelve == 9) && (ampm == "A.M.")) { twentyFour = 9; }
            if ((twelve == 10) && (ampm == "A.M.")) { twentyFour = 10; }
            if ((twelve == 11) && (ampm == "A.M.")) { twentyFour = 11; }
            if ((twelve == 12) && (ampm == "P.M.")) { twentyFour = 12; }
            if ((twelve == 1) && (ampm == "P.M.")) { twentyFour = 13; }
            if ((twelve == 2) && (ampm == "P.M.")) { twentyFour = 14; }
            if ((twelve == 3) && (ampm == "P.M.")) { twentyFour = 15; }
            if ((twelve == 4) && (ampm == "P.M.")) { twentyFour = 16; }
            if ((twelve == 5) && (ampm == "P.M.")) { twentyFour = 17; }
            if ((twelve == 6) && (ampm == "P.M.")) { twentyFour = 18; }
            if ((twelve == 7) && (ampm == "P.M.")) { twentyFour = 19; }
            if ((twelve == 8) && (ampm == "P.M.")) { twentyFour = 20; }
            if ((twelve == 9) && (ampm == "P.M.")) { twentyFour = 21; }
            if ((twelve == 10) && (ampm == "P.M.")) { twentyFour = 22; }
            if ((twelve == 11) && (ampm == "P.M.")) { twentyFour = 23; }
            if ((twelve == 12) && (ampm == "A.M.")) { twentyFour = 0; }

            break;

        default:

            break;
        }

    } while (acceptingInput == true);

    return;
}