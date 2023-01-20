/****************************************************************************************************
Shera Adams
Southern New Hampshire University
Chada Tech Clock

Clock class is used to store several functions called frequently in changing the time.
Add hour, add minute, add second, print menu, and addAmpm functions are defined.
****************************************************************************************************/

#include "Clock.h"
#include "Driver.h"
#include<iostream>
#include <ctime>
#include <cstdlib>
#include<stdlib.h>

using namespace std;

// AddHour function can be called to add an hour to the clock
// time parameters are passed by reference 
void Clock::addHour(int& twentyFour, int& twelve, string& ampm)
{
    twelve += 1;
    twentyFour += 1;

    if (twelve == 13)
    {
        twelve = 1;
    }

    if (twentyFour == 24)
    {
        twentyFour = 00;
    }
}

//add minute function can be called to add minutes to the clock
void Clock::addMinute(int& twentyFour, int& twelve, int& minutes, string& ampm)
{
    minutes += 1;

    if (minutes >= 59 && twelve < 12)
    {
        minutes = 0;
        twentyFour += 1;
        twelve += 1;
    }

    if (minutes >= 59 && twelve >= 12)
    {
        minutes = 0;
        twelve = 1;
        if (twentyFour < 23)
        {
            twentyFour +=1;
        }
        if (twentyFour > 23)
        {
            twentyFour = 00;
        }
    }
}

//add second function adds second to the clock
void Clock::addSecond(int& twentyFour, int& twelve, int& minutes, int& seconds, string& ampm)
{

    seconds += 1;

    if ((seconds >= 59) && (minutes >= 59))
    {
        minutes = 0;
        seconds = 0;
        twentyFour = twentyFour + 1;
        twelve = twelve + 1;

        if (twentyFour > 23)
        {
            twentyFour = 00;
        }
        if (twelve > 12)
        {
            twelve = 1;
        }
    }

    if (seconds >= 59)
    {
        minutes += 1;
        seconds = 0;
    }
}

//Am pm function defined for calling after a user-requested time change to verify that the time is in the correct ampm format
void Clock::addAmpm(int& twentyFour, int& twelve,  int& minutes, int& seconds, string& ampm)
{
    if (twentyFour == 12)
    {
        ampm = "P.M.";
    }

    if (twentyFour == 00)
    {
        ampm = "A.M.";
    }
}

// print menu function
void Clock::menu()
{

    cout << "**********************************************************" << endl;
    cout << "*                   [1] Add One Hour                     *" << endl;
    cout << "*                   [2] Add One Minute                   *" << endl;
    cout << "*                   [3] Add One Second                   *" << endl;
    cout << "*                   [4] Exit Application                 *" << endl;
    cout << "*                   [5] Set A Time                       *" << endl;
    cout << "**********************************************************" << endl;

    cout << "" << endl;
    cout << "" << endl;
}
