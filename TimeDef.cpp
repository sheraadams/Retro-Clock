/****************************************************************************************************
Shera Adams
Southern New Hampshire University
Chada Tech Clock
 
TimeDef Class is used to decide what kind of formatting is required to print out a given time to fit 
a double digit minute, second and hour format. 
****************************************************************************************************/
#include "TimeDef.h"
#include "Clock.h"
#include "Driver.h"
#include<iostream>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

void TimeDef::timedef(int& seconds, int& minutes, int& TwelveDigits, int& Twenty4Digits, string& ampm) 
{
    int zero = 0;
    char colon = ':';

    cout << "" << endl;
    cout << "" << endl;

    cout << "**************************\t" << "**************************" << endl;
    cout << "*     12-Hour Clock      *\t" << "*     24-Hour Clock      *" << endl;

    /****************************************************************************************************
     Permuation of time formatting. 16 permutations are accounted for here as permuations of 2 options 
     (single/ double) for hours, minutes, seconds, 24h and 12h positions.
     First case is minutes, seconds, twenty-four hour hours and twelve hour hours are all single digit.
     ****************************************************************************************************/

    if ((minutes < 10) && (seconds < 10) && (Twenty4Digits < 10) && (TwelveDigits < 10)) 
    {
        cout << "*     " << zero << TwelveDigits << colon << zero << minutes << colon << zero << seconds
            << " " << ampm << "      *\t" << "*     " << zero << Twenty4Digits
            << colon << zero << minutes << colon << zero << seconds << "           *" << endl;
    }

    else if ((minutes < 10) && (seconds >= 10) && (Twenty4Digits < 10) && (TwelveDigits < 10)) 
    {
        cout << "*     " << zero << TwelveDigits << colon << zero << minutes << colon << seconds << " "
            << ampm << "      *\t" << "*     " << zero << Twenty4Digits << colon << zero << minutes
            << colon << seconds << "           *" << endl;
    }

    else if ((minutes >= 10) && (seconds < 10) && (Twenty4Digits < 10) && (TwelveDigits < 10)) 
    {
        cout << "*     " << zero << TwelveDigits << colon << minutes << colon << zero << seconds << " "
            << ampm << "      *\t" << "*     " << zero << Twenty4Digits << colon << minutes << colon
            << zero << seconds << "           *" << endl;
    }

    if ((minutes < 10) && (seconds < 10) && (Twenty4Digits < 10) && (TwelveDigits > 10)) 
    {
        cout << "*     " << TwelveDigits << colon << zero << minutes << colon << zero << seconds
            << " " << ampm << "      *\t" << "*     " << zero << Twenty4Digits
            << colon << zero << minutes << colon << zero << seconds << "           *" << endl;
    }

    else if ((minutes < 10) && (seconds >= 10) && (Twenty4Digits < 10) && (TwelveDigits > 10)) 
    {
        cout << "*     " << TwelveDigits << colon << zero << minutes << colon << seconds << " "
            << ampm << "      *\t" << "*     " << zero << Twenty4Digits << colon << zero << minutes
            << colon << seconds << "           *" << endl;
    }

    else if ((minutes >= 10) && (seconds < 10) && (Twenty4Digits < 10) && (TwelveDigits > 10)) 
    {
        cout << "*     " << TwelveDigits << colon << minutes << colon << zero << seconds << " "
            << ampm << "      *\t" << "*     " << zero << Twenty4Digits << colon << minutes << colon
            << zero << seconds << "           *" << endl;
    }

    // case when 24 digits is single digit and 12 digits is double digits 
    else if ((minutes >= 10) && (seconds >= 10) && (Twenty4Digits < 10) && (TwelveDigits < 10)) 
    {
        cout << "*     " << zero << TwelveDigits << colon << minutes << colon << seconds << " " << ampm    
            << "      *\t" << "*     " << zero << Twenty4Digits << colon << minutes << colon << seconds
            << "           *" << endl;
    }

    else if ((minutes >= 10) && (seconds < 10) && (Twenty4Digits >= 10) && (TwelveDigits >= 10)) 
    {
        cout << "*     " << TwelveDigits << colon << minutes << colon << zero << seconds << " "
            << ampm << "      *\t" << "*     " << Twenty4Digits << colon << minutes
            << colon << zero << seconds << "           *" << endl;
    }

    else if ((minutes >= 10) && (seconds < 10) && (Twenty4Digits >= 10) && (TwelveDigits < 10)) 
    {
        cout << "*     " << zero << TwelveDigits << colon << minutes << colon << zero << seconds << " " << ampm
            << "      *\t" << "*     " << Twenty4Digits << colon << minutes << colon << zero << seconds
            << "           *" << endl;
    }

    else if ((minutes < 10) && (seconds < 10) && (Twenty4Digits >= 10) && (TwelveDigits >= 10)) 
    {
        cout << "*     " << TwelveDigits << colon << zero << minutes << colon << zero << seconds << " "
            << ampm << "      *\t" << "*     " << Twenty4Digits << colon << zero << minutes << colon
            << zero << seconds << "           *" << endl;
    }

    else if ((minutes < 10) && (seconds < 10) && (Twenty4Digits >= 10) && (TwelveDigits < 10)) 
    {
        cout << "*     " << zero << TwelveDigits << colon << zero << minutes << colon << zero << seconds << " "
            << ampm << "      *\t" << "*     " << Twenty4Digits << colon << zero << minutes << colon
            << zero << seconds << "           *" << endl;
    }

    else if ((minutes >= 10) && (seconds >= 10) && (Twenty4Digits >= 10) && (TwelveDigits >= 10)) 
    {
        cout << "*     " << TwelveDigits << colon << minutes << colon << seconds << " " << ampm
            << "      *\t" << "*     " << Twenty4Digits << colon << minutes << colon << seconds
            << "           *" << endl;
    }

    // case when 24h is 00 and 12h is 12
    else if ((minutes >= 10) && (seconds >= 10) && (Twenty4Digits < 10) && (TwelveDigits >= 10)) 
    {  
        cout << "*     " << TwelveDigits << colon << minutes << colon << seconds << " " << ampm
            << "      *\t" << "*     " << Twenty4Digits << colon << minutes << colon << seconds
            << "           *" << endl;
    }

    else if ((minutes >= 10) && (seconds >= 10) && (Twenty4Digits >= 10) && (TwelveDigits < 10)) 
    {
        cout << "*     " << zero << TwelveDigits << colon << minutes << colon << seconds << " " << ampm
            << "      *\t" << "*     " << Twenty4Digits << colon << minutes << colon << seconds
            << "           *" << endl;
    }

    else if ((minutes < 10) && (seconds >= 10) && (Twenty4Digits >= 10) && (TwelveDigits < 10)) 
    {
        cout << "*     " << zero << TwelveDigits << colon << zero << minutes << colon << seconds << " " << ampm
            << "      *\t" << "*     " << Twenty4Digits << colon << zero << minutes << colon << seconds
            << "           *" << endl;
    }

    else if ((minutes < 10) && (seconds >= 10) && (Twenty4Digits >= 10) && (TwelveDigits >= 10)) 
    {
        cout << "*     " << TwelveDigits << colon << zero << minutes << colon << seconds << " " << ampm
            << "      *\t" << "*     " << Twenty4Digits << colon << zero << minutes << colon << seconds
            << "           *" << endl;
    }

    cout << "**************************\t" << "**************************" << endl;
    cout << endl;
}