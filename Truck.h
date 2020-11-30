#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle
{
private:

	int tow;

public:

	void getTruckInfo(string maker, int y, int capacity);
	void displayInfo();

};
#endif
