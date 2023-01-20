#ifndef CLOCK_PROJECT_REWORKED_CLOCK_H
#define CLOCK_PROJECT_REWORKED_CLOCK_H

#include <string>

using namespace std;

class Clock {

public:

    void addHour(int& twentyFour, int& twelve, string& ampm);

    void addMinute(int& twentyFour, int& twelve, int& minutes, string& ampm);

    void addSecond(int& twentyFour, int& twelve, int& minutes, int& seconds, string& ampm);

    void menu();

    void addAmpm(int& twentyFour, int& twelve, int& minutes, int& seconds, string& ampm);

};


#endif 