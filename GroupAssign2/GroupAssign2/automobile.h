//automobile.h

#pragma once

#include <iostream>
#include<string>
#include "vehicles.h"

using namespace std;

class automobile : public vehicles
{
public:
	automobile();
	automobile(string, string, int);
	void setMake(string);
	void setModel(string);
	void setWheels(int);
	void setSeats(int);
	void setWeight(int);
	void setEngine(string);

	string getMake();
	string getModel();
	int getWheels();

	string getEngine();
	int getSeats();
	int getWeight();



	void setVehicle();
	void operator=(automobile a);

	void printToFileA(string);

	void printToFileAC(string);

	~automobile();

private:
	string make;
	string model;
	int wheels;
	static int a_count;



};
