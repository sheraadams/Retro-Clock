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
#pragma warning(disable : 4996)
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
            if (5 < userInput <= 0) 
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

        default:
         
            break;
        }

    } while (acceptingInput == true);

    return;
}
