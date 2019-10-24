#include "stopwatch.h"
#include<iostream>
#include<iomanip>
using namespace std;


stopwatch::stopwatch()
{
	hour = 0;
	minute = 0;
	second = 0;
}

stopwatch::stopwatch(int h, int minute, int second)
{
	hour = h;
	this->minute = minute;
	this->second = second;

}



void stopwatch::printTime() {
	//cout << hour << ":" << minute << ":" << second << endl;
	cout << hour << ":";
	cout << setw(2) << setfill('0') << minute << ":";
	cout << setw(2) << setfill('0') << second;
}

int stopwatch::get_Hour()
{
	return hour;
}

int stopwatch::get_Minute()
{
	return minute;
}

int stopwatch::get_Second()
{
	return second;
}