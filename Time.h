#pragma once
#include <iostream>

using namespace std;
class Time
{
public:
	int twentyFour, twelve, minutes, seconds;
	string ampm;

	Time(int twentyFour, int twelve, int minutes, int seconds, string ampm);

	void setSeconds(int seconds);
	void setMinutes(int minutes);
	void setTwentyFour(int twentyFour);
	void setTwelve(int twelve);
	void setAmpm(string ampm);
	
	int getSeconds();
	int getMinutes();
	int getTwentyFour();
	int getTwelve();
	std::string getAmpm();


private:

};

