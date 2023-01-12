/****************************************************************************************************
Shera Adams
Southern New Hampshire University
Chada Tech Clock

The driver class runs on a while loop that executes the main menu on a switch where case 1 is add 
hours, case 2 is add minutes, case 3 is add seconds and case 4 is exit the application. 
****************************************************************************************************/

#include "Driver.h"
#include "Driver.h"
#include "Clock.h"
#include "TimeDef.h"
#include <iostream>
#include <iomanip>
// to use current time, disable warning 4996
#pragma warning(disable : 4996).
using namespace std;

// function objects
Clock hourObject;
Clock addSecObject;
Clock addMinObject;
Clock ampmObject;
Clock PMenuObject;
TimeDef timedefObject;

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
    int TwelveDigits = ltm->tm_hour;  
    int Twenty4Digits = ltm->tm_hour;
    int minutes = ltm->tm_min;
    int seconds = ltm->tm_sec;


    if (ltm->tm_hour > 12) 
    {
        TwelveDigits = ltm->tm_hour - 12;
    }
    else 
    {
        TwelveDigits = ltm->tm_hour;
    }
    if (ltm->tm_hour > 12) 
    {
        TwelveDigits = ltm->tm_hour - 12;
    }
    else 
    {
        TwelveDigits = ltm->tm_hour;
    }
    if (Twenty4Digits >= 12) 
    {
        ampm = "P.M.";
    }
    else
    {
        ampm = "A.M.";
    }
    do 
    {
        try 
        {

            //print the time
            timedefObject.timedef(seconds, minutes, TwelveDigits, Twenty4Digits, ampm);
          
            PMenuObject.pMenu();
         
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
            if ((userInput > 5) || (userInput <= 0))
            {
                throw (userInput);
            }
        }
        catch (...) {}

        switch (userInput) 
        { 
       // user can add hour manually
        case 1:

            hourObject.addHour(TwelveDigits, Twenty4Digits, ampm);

            ampmObject.addAmpm(seconds, minutes, TwelveDigits, Twenty4Digits, ampm);
            break;

        // user can add minute manually 
        case 2:

            addMinObject.addMinute(minutes, TwelveDigits, Twenty4Digits, ampm);

            ampmObject.addAmpm(seconds, minutes, TwelveDigits, Twenty4Digits, ampm);
           
            break;

        // user can add second manually 
        case 3:


            addSecObject.addSecond(seconds, minutes, TwelveDigits, Twenty4Digits, ampm);

            ampmObject.addAmpm(seconds, minutes, TwelveDigits, Twenty4Digits, ampm);

            break;
        case 4:

            cout << "**********************************************************" << endl;
            cout << "*                Now Exiting Application                 *" << endl;
            cout << "**********************************************************" << endl;

            return;
        
        
        case 5: 
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
                    PMenuObject.pMenu();
                    continue;
                }
            }
            catch (...) {}
            TwelveDigits = userHours;


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
                    PMenuObject.pMenu();
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
                    PMenuObject.pMenu();
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
                    PMenuObject.pMenu();
                    continue;
                }
            }
            catch (...) {}
            if (userAmpm == 1)
                ampm = "A.M.";
            else
                ampm = "P.M.";

            // define 24 hour time
            if ((TwelveDigits == 12) && (ampm == "A.M.")) 
            { 
                Twenty4Digits = 0; 
            }
            if ((TwelveDigits == 1) && (ampm == "A.M.")) { Twenty4Digits = 1; }
            if ((TwelveDigits == 2) && (ampm == "A.M.")) { Twenty4Digits = 2; }
            if ((TwelveDigits == 3) && (ampm == "A.M.")) { Twenty4Digits = 3; }
            if ((TwelveDigits == 4) && (ampm == "A.M.")) { Twenty4Digits = 4; }
            if ((TwelveDigits == 5) && (ampm == "A.M.")) { Twenty4Digits = 5; }
            if ((TwelveDigits == 6) && (ampm == "A.M.")) { Twenty4Digits = 6; }
            if ((TwelveDigits == 7) && (ampm == "A.M.")) { Twenty4Digits = 7; }
            if ((TwelveDigits == 8) && (ampm == "A.M.")) { Twenty4Digits = 8; }
            if ((TwelveDigits == 9) && (ampm == "A.M.")) { Twenty4Digits = 9; }
            if ((TwelveDigits == 10) && (ampm == "A.M.")) { Twenty4Digits = 10; }
            if ((TwelveDigits == 11) && (ampm == "A.M.")) { Twenty4Digits = 11; }
            if ((TwelveDigits == 12) && (ampm == "P.M.")) { Twenty4Digits = 12; }
            if ((TwelveDigits == 1) && (ampm == "P.M.")) { Twenty4Digits = 13; }
            if ((TwelveDigits == 2) && (ampm == "P.M.")) { Twenty4Digits = 14; }
            if ((TwelveDigits == 3) && (ampm == "P.M.")) { Twenty4Digits = 15; }
            if ((TwelveDigits == 4) && (ampm == "P.M.")) { Twenty4Digits = 16; }
            if ((TwelveDigits == 5) && (ampm == "P.M.")) { Twenty4Digits = 17; }
            if ((TwelveDigits == 6) && (ampm == "P.M.")) { Twenty4Digits = 18; }
            if ((TwelveDigits == 7) && (ampm == "P.M.")) { Twenty4Digits = 19; }
            if ((TwelveDigits == 8) && (ampm == "P.M.")) { Twenty4Digits = 20; }
            if ((TwelveDigits == 9) && (ampm == "P.M.")) { Twenty4Digits = 21; }
            if ((TwelveDigits == 10) && (ampm == "P.M.")) { Twenty4Digits = 22; }
            if ((TwelveDigits == 11) && (ampm == "P.M.")) { Twenty4Digits = 23; }

            break;
        


        default:
         
            break;
        }

    } while (acceptingInput == true);

    return;
}