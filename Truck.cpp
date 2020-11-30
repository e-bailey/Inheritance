#include "Vehicle.h"
#include "Truck.h"

void Truck::getInfo(string maker, int y, int capacity)
{
	Vehicle::getInfo(maker, y);
	tow = capacity;

}
void Truck::displayInfo()
{

	Vehicle::displayInfo();

	cout << "Towing Capacity: " << tow << '\n';

}