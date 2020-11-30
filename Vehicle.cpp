#include "Vehicle.h"

void Vehicle::getInfo(string vManufacturer, int vYear)
{
	manufacturer = vManufacturer;
	year = vYear;

}
void Vehicle::displayInfo()
{

	cout << "Vehicle Information" << '\n';
	cout << "Manufacturer: " << manufacturer;
	cout << "Year Built: " << year;

}