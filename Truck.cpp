#include "Vehicle.h"
#include "Truck.h"

void Truck::getTruckInfo(string maker, int y, int capacity)
{
	tow = capacity;

}
void Truck::displayInfo()
{

	Vehicle::displayInfo();

	cout << "Towing Capacity: " << tow << '\n';

}