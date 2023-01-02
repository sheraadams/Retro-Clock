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
void Clock::addHour(int& TwelveDigits, int& Twenty4Digits, string& ampm)
{
    TwelveDigits += 1;
    Twenty4Digits += 1;

    if (TwelveDigits == 13) 
    {
        TwelveDigits = 1;
    }

    if (Twenty4Digits == 24) 
    {
        Twenty4Digits = 00;
    }
}

//add minute function can be called to add minutes to the clock
void Clock::addMinute(int& minutes, int& TwelveDigits, int& Twenty4Digits, string& ampm)
{
    minutes += 1;

    if ((minutes == 60) && (TwelveDigits != 12)) 
    {
        minutes = 0;
        Twenty4Digits += 1;
        TwelveDigits += 1;
    }

    if (minutes == 59 && TwelveDigits == 12) 
    {
        minutes = 0;
        TwelveDigits = 1;

        if (Twenty4Digits == 12) 
        {
            Twenty4Digits = 13;
        }

        if (Twenty4Digits == 24) 
        {
            Twenty4Digits = 00;
        }
    }
}


//add second function adds second to the clock
void Clock::addSecond(int& seconds, int& minutes, int& TwelveDigits, int& Twenty4Digits, string& ampm) 
{

    seconds += 1;

    if ((seconds == 60) && (minutes == 59)) 
    {
        minutes = 0;
        seconds = 0;

        Twenty4Digits = Twenty4Digits + 1;
        TwelveDigits = TwelveDigits + 1;

        if (Twenty4Digits == 24) 
        {
            Twenty4Digits = 00;
        }

        if (Twenty4Digits == 12) 
        {
            Twenty4Digits = 1;
        }

    }
    if (seconds == 60)
    {
        minutes += 1;
        seconds = 0;
    }
}

//Am pm function defined for calling after a user-requested time change to verify that the time is in the correct ampm format
void Clock::addAmpm(int& seconds, int& minutes, int& TwelveDigits, int& Twenty4Digits, string& ampm) 
{
    if (Twenty4Digits == 12) 
    {
        ampm = "P.M.";
    }

    if (Twenty4Digits == 00)
    {
        ampm = "A.M.";
    }
}

// print menu function
void Clock::pMenu()
{

    cout << "**********************************************************" << endl;
    cout << "*                   [1] Add One Hour                     *" << endl;
    cout << "*                   [2] Add One Minute                   *" << endl;
    cout << "*                   [3] Add One Second                   *" << endl;
    cout << "*                   [4] Exit Application                 *" << endl;
    cout << "**********************************************************" << endl;

    cout << "" << endl;
    cout << "" << endl;
}
