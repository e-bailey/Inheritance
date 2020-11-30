
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle
{
private:
	
	int doors;

public:

	void getCarInfo(string maker, int y, int doorNum);
	void displayInfo();

};
#endif