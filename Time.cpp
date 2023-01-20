#include "Time.h"
#include <iostream>

using namespace std;

Time::Time(int twentyFour, int twelve, int minutes, int seconds, string ampm)
{
	setTwentyFour(twentyFour);
	setTwelve(twelve);
	setMinutes(minutes);
	setSeconds(seconds);
	setAmpm(ampm);
}

void Time::setSeconds(int seconds) { this->seconds = seconds; }
void Time::setMinutes(int minutes) { this->minutes = minutes; }
void Time::setTwentyFour(int twentyFour) { this->twentyFour = twentyFour; }
void Time::setTwelve(int twelve) { this->twelve = twelve; }
void Time::setAmpm(string ampm) { this->ampm = ampm; }

int Time::getSeconds() { return seconds; }
int Time::getMinutes() { return minutes; }
int Time::getTwentyFour() { return twentyFour; }
int Time::getTwelve() { return twelve; }
string Time::getAmpm() { return ampm; }