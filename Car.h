
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle
{
private:
	
	int doors;

public:

	void getCarInfo(string cManufacturer, int cYear, int cDoors);
	void displayInfo();

};
#endif