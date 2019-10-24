//watercraft.h
#pragma once

#include "vehicles.h"
#include<string>

using namespace std;

class watercraft : public vehicles {
public:
	watercraft();

	void setHull(string);
	void setManufacture(string);
	void setSeats(int);
	void setWeight(int);
	void setEngine(string);
	string getHull();
	string getManufacture();


	string getEngine();
	int getSeats();
	int getWeight();


	void setVehicle();
	void operator=(watercraft w);

	void printToFileW(string);
	void printToFileWC(string);

	~watercraft();



private:

	string hull;
	string manufacture;
	static int w_count;

};

