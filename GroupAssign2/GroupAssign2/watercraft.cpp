//watercraft.cpp
#include "watercraft.h"
#include <string>
#include "vehicles.h"
#include <fstream>

using namespace std;

watercraft::watercraft()
{
	vehicles();
	setVehicle();
	hull = "V - Hull";
	manufacture = "Sea Ark Boats";
	count++;
	w_count++;
}

void watercraft::setVehicle() {
	engine = "Minn Kota Max 70";
	seats = 12;
	weight = 1860;

}

void watercraft::setHull(string h) {
	hull = h;
}
void watercraft::setManufacture(string m) {
	manufacture = m;
}

void watercraft::setSeats(int s)
{
	seats = s;
}

void watercraft::setWeight(int w)
{
	weight = w;
}
void watercraft::setEngine(string e)
{
	engine = e;
}

string watercraft::getHull() {
	return hull;
}
string watercraft::getManufacture() {
	return manufacture;
}


string watercraft::getEngine() {
	return engine;
}
int watercraft::getSeats() {
	return seats;
}
int watercraft::getWeight() {
	return weight;
}



void watercraft::operator=(watercraft w) {

	setEngine(w.getEngine());
	setWeight(w.getWeight());
	setSeats(w.getSeats());
	setHull(w.getHull());
	setManufacture(w.getManufacture());

}

void watercraft::printToFileW(string s)
{
	ofstream outStream;
	outStream.open(s, ios::app);
	outStream << "Watercraft: \n"
		<< "Engine: " << engine << "\n"
		<< "Weight: " << weight << "\n"
		<< "Seats: " << seats << "\n"
		<< "Hull: " << hull << "\n"
		<< "Manufacturer: " << manufacture << "\n\n";
	outStream.close();
}

void watercraft::printToFileWC(string s)
{
	ofstream outStream;
	outStream.open(s, ios::app);
	outStream << "Watercraft created :" << w_count << "\n";
	outStream.close();
}


watercraft::~watercraft()
{
}

int watercraft::w_count;

