#ifndef STOPWATCH_H
#define STOPWATCH_H

#include<iostream>
using namespace std;


class stopwatch
{
public:
	stopwatch();
	stopwatch(int hour, int minute, int second);
	void printTime();
	int get_Hour();
	int get_Minute();
	int get_Second();
	
	
private:
	int hour;
	int minute;
	int second;
};

#endif