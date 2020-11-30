#include "Vehicle.h"
#include "Car.h"

void Car::getInfo(string maker, int y, int doorNum)
{
	Vehicle::getInfo(maker, y);
	doors = doorNum;

}
void Car::displayInfo()
{

	Vehicle::displayInfo();

	cout << "Doors: " << doors << '\n';

}