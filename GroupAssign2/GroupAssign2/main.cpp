//main.cpp

#include<iostream>
#include "vehicles.h"
#include "automobile.h"
#include "watercraft.h"
#include <fstream>

using namespace std;

int main()
{
	
	string filename = "out.txt";

	watercraft w1;
	watercraft w2;

	w2.setEngine("Yamaha 115 HP");
	w2.setWeight(5200);
	w2.setSeats(10);
	w2.setHull("Fiberglass");


	w1.printToFileW(filename);
	w2.printToFileW(filename);

	automobile a1;
	a1.printToFileA(filename);

	automobile a2;
	a2.setEngine("3A90I3");
	a2.setWheels(4);
	a2.setWeight(2072);
	a2.setSeats(5);
	a2.setMake("Mirage");
	a2.setModel("Mitsubishi");

	a2.printToFileA(filename);

	automobile a3("Honda", "Accord", 4);
	a3.printToFileA(filename);

	watercraft w3;
	w3 = w2;

	w3.printToFileW(filename);

	automobile a4;
	a4 = a2;

	a4.printToFileA(filename);

	a4.printToFileAC(filename);
	w3.printToFileWC(filename);

	return 0;
}
