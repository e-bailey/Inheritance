#include "Vehicle.h"

void Vehicle::getInfo(string maker, int y)
{
	manufacturer = maker;
	year = y;

}
void Vehicle::displayInfo()
{

	cout << "Vehicle Information: " << '\n';
	cout << "Manufacturer: " << manufacturer << '\n';
	cout << "Year Built: " << year << '\n';

}