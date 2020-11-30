#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
private: 
	string manufacturer;
	int year;

public:

	void getInfo(string vManufacturer, int vYear);
	void displayInfo();

};
#endif