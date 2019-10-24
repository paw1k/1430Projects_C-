//automobile.cpp

#include "automobile.h"
#include "vehicles.h"
#include<string>
#include<fstream>
using namespace std;

automobile::automobile()
{
	vehicles();
	setVehicle();
	make = "Toyota";
	model = "Solara";
	wheels = 4;
	count++;
	a_count++;


}

automobile::automobile(string mak, string mod, int w = 4) {
	setVehicle();
	make = mak;
	model = mod;
	wheels = w;
	a_count++;
	count++;
}

void automobile::setVehicle() {
	engine = "V6";
	seats = 2;
	weight = 4079;

}

void automobile::setMake(string mak) {
	make = mak;
}

void automobile::setEngine(string e)
{
	engine = e;
}

void automobile::setSeats(int s)
{
	seats = s;
}

void automobile::setWeight(int w)
{
	weight = w;
}

void automobile::setModel(string mod) {
	model = mod;
}
void automobile::setWheels(int w) {
	wheels = w;
}
string automobile::getMake() {
	return make;
}
string automobile::getModel() {
	return model;
}
int automobile::getWheels() {
	return wheels;
}



string automobile::getEngine() {
	return engine;
}
int automobile::getSeats() {
	return seats;
}
int automobile::getWeight() {
	return weight;
}



void automobile::operator=(automobile a) {

	setEngine(a.getEngine());
	setWheels(a.getWheels());
	setWeight(a.getWeight());
	setSeats(a.getSeats());
	setMake(a.getMake());
	setModel(a.getModel());


}

void automobile::printToFileA(string s)
{
	ofstream outStream;
	outStream.open(s, ios::app);
	outStream << "Automobile: \n"
		<< "Engine: " << engine << "\n"
		<< "Wheels: " << wheels << "\n"
		<< "Weight: " << weight << "\n"
		<< "Seats: " << seats << "\n"
		<< "Make: " << make << "\n"
		<< "Model: " << model << "\n\n";
	outStream.close();
}


void automobile::printToFileAC(string s)
{
	ofstream outStream;
	outStream.open(s, ios::app);
	outStream << "Vehicles created: " << count << "\n";
	outStream << "Automobiles created :" << a_count << "\n";
	outStream.close();
}

automobile::~automobile()
{
}

int automobile::a_count;
