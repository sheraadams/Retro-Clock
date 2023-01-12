#ifndef CHADATECHCLOCK_TIMEDEF_H
#define CHADATECHCLOCK_TIMEDEF_H
#include <string>
using namespace std;

class TimeDef {

public:
    void timedef(int& seconds, int& minutes, int& TwelveDigits,
        int& Twenty4Digits, string& ampm);

};


#endif //CHADATECHCLOCK_TIMEDEF_H