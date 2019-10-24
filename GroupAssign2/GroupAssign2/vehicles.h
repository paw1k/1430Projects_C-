#ifndef GA2_VEHICLES_H
#define GA2_VEHICLES_H

#include <string>
using namespace std;

class vehicles {
protected:
	string engine;
	int seats;
	int weight;

public:
	vehicles();
	static int count;
};

#endif //GA2_VEHICLES_H
