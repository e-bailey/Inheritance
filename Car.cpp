#include "Vehicle.h"
#include "Car.h"

void Car::getCarInfo(string maker, int y, int doorNum)
{
	doors = doorNum;

}
void Car::displayInfo()
{

	Vehicle::displayInfo();

	cout << "Doors: " << doors << '\n';

}