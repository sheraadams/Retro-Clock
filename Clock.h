#ifndef CHADATECHCLOCK_CLOCK_H
#define CHADATECHCLOCK_CLOCK_H

#include <string>

using namespace std;

class Clock {

public:

    void addHour(int& TwelveDigits, int& Twenty4Digits, string& ampm);

    void addMinute(int& minutes, int& TwelveDigits, int& Twenty4Digits, string& ampm);

    void addSecond(int& seconds, int& minutes, int& TwelveDigits,
        int& Twenty4Digits, string& ampm);

    void pMenu();


    void addAmpm(int& seconds, int& minutes, int& TwelveDigits,
        int& Twenty4Digits, string& ampm);

};


#endif //CHADATECHCLOCK_CLOCK_H