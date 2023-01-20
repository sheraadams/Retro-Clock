/****************************************************************************************************
Shera Adams
Southern New Hampshire University
Chada Tech Clock

Permutations Class is used to decide what kind of formatting is required to print out a given time to fit
a double digit minute, second and hour format.
****************************************************************************************************/
#include "Permutations.h"
#include "Clock.h"
#include "Driver.h"
#include<iostream>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

void Permutations::permutations(int& twentyFour, int& twelve, int& minutes, int& seconds, string& ampm)
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

    if ((minutes < 10) && (seconds < 10) && (twelve < 10) && (twentyFour < 10))
    {
        cout << "*     " << zero << twelve << colon << zero << minutes << colon << zero <<
            seconds << " " << ampm << "      *\t" << "*     " << zero << twentyFour
            << colon << zero << minutes << colon << zero << seconds << "           *" << endl;
    }

    else if ((minutes < 10) && (seconds >= 10) && (twelve < 10) && (twentyFour < 10))
    {
        cout << "*     " << zero << twelve << colon << zero << minutes << colon << seconds
            << " " << ampm << "      *\t" << "*     " << zero <<
            twentyFour << colon << zero << minutes
            << colon << seconds << "           *" << endl;
    }

    else if ((minutes >= 10) && (seconds < 10) && (twelve < 10) && (twentyFour < 10))
    {
        cout << "*     " << zero << twelve << colon << minutes << colon << zero << seconds
            << " " << ampm << "      *\t" << "*     " << zero <<
            twentyFour << colon << minutes << colon
            << zero << seconds << "           *" << endl;
    }

    if ((minutes < 10) && (seconds < 10) && (twelve < 10) && (twentyFour >= 10))
    {
        cout << "*     " << zero << twelve << colon << zero << minutes << colon << zero << seconds
            << " " << ampm << "      *\t" << "*     " << twentyFour
            << colon << zero << minutes << colon << zero << seconds << "           *" << endl;
    }

    else if ((minutes < 10) && (seconds >= 10) && (twelve < 10) && (twentyFour >= 10))
    {
        cout << "*     " << zero << twelve << colon << zero << minutes << colon << seconds << " "
            << ampm << "      *\t" << "*     " << twentyFour << colon << zero << minutes
            << colon << seconds << "           *" << endl;
    }

    else if ((minutes >= 10) && (seconds < 10) && (twelve < 10) && (twentyFour >= 10))
    {
        cout << "*     " << zero << twelve << colon << minutes << colon << zero << seconds << " "
            << ampm << "      *\t" << "*     " << twentyFour << colon << minutes << colon
            << zero << seconds << "           *" << endl;
    }

    // case when 24 digits is single digit and 12 digits is double digits 
    else if ((minutes >= 10) && (seconds >= 10) && (twelve < 10) && (twentyFour < 10))
    {
        cout << "*     " << zero << twelve << colon << minutes << colon << seconds << " "
            << ampm << "      *\t" << "*     " << zero << twentyFour << colon << minutes << colon << seconds
            << "           *" << endl;
    }

    else if ((minutes >= 10) && (seconds < 10) && (twelve >= 10) && (twentyFour >= 10))
    {
        cout << "*     " << twelve << colon << minutes << colon << zero << seconds << " "
            << ampm << "      *\t" << "*     " << twentyFour << colon << minutes
            << colon << zero << seconds << "           *" << endl;
    }

    else if ((minutes >= 10) && (seconds < 10) && (twelve >= 10) && (twentyFour < 10))
    {
        cout << "*     " <<  twelve << colon << minutes << colon << zero << seconds << " "
            << ampm << "      *\t" << "*     " << zero <<twentyFour << colon << minutes << 
            colon << zero << seconds << "           *" << endl;
    }

    else if ((minutes < 10) && (seconds < 10) && (twelve >= 10) && (twentyFour >= 10))
    {
        cout << "*     " << twelve << colon << zero << minutes << colon << zero << seconds << " "
            << ampm << "      *\t" << "*     " << twentyFour << colon << zero << minutes << colon
            << zero << seconds << "           *" << endl;
    }

    else if ((minutes < 10) && (seconds < 10) && (twelve >= 10) && (twentyFour < 10))
    {
        cout << "*     " <<  twelve << colon << zero << minutes << colon << zero << seconds << " "
            << ampm << "      *\t" << "*     " << zero << twentyFour << colon << zero << minutes << colon
            << zero << seconds << "           *" << endl;
    }

    else if ((minutes >= 10) && (seconds >= 10) && (twelve >= 10) && (twentyFour >= 10))
    {
        cout << "*     " << twelve << colon << minutes << colon << seconds << " " << ampm
            << "      *\t" << "*     " << twentyFour << colon << minutes << colon << seconds
            << "           *" << endl;
    }

    // case when 24h is 00 and 12h is 12  fixed 1/12/23 no leading zero was printing before 24 digits
    else if ((minutes >= 10) && (seconds >= 10) && (twelve < 10) && (twentyFour >= 10))
    {
        cout << "*     " << zero <<twelve << colon << minutes << colon << seconds << " " << ampm
            << "      *\t" << "*     " << twentyFour << colon << minutes << colon << seconds
            << "           *" << endl;
    }

    else if ((minutes >= 10) && (seconds >= 10) && (twelve >= 10) && (twentyFour < 10))
    {
        cout << "*     " <<  twelve << colon << minutes << colon << seconds << " " << ampm
            << "      *\t" << "*     " << zero <<twentyFour << colon << minutes << colon << seconds
            << "           *" << endl;
    }

    else if ((minutes < 10) && (seconds >= 10) && (twelve >= 10) && (twentyFour < 10))
    {
        cout << "*     " << twelve << colon << zero << minutes << colon << seconds << " "
            << ampm << "      *\t" << "*     " <<

            twentyFour << colon << zero << minutes << colon << seconds
            << "           *" << endl;
    }

    else if ((minutes < 10) && (seconds >= 10) && (twelve >= 10) && (twentyFour >= 10))
    {
        cout << "*     " << twelve << colon << zero << minutes << colon << seconds << " " << ampm
            << "      *\t" << "*     " << twentyFour << colon << zero << minutes << colon << seconds
            << "           *" << endl;
    }

    cout << "**************************\t" << "**************************" << endl;
    cout << endl;
}