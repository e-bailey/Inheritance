#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
	Vehicle v;
	Car c;
	Truck t;

	string maker;
	int year;
	int doors;
	int tow;

	cout << "Vehicle Program" << "\n\n";

	cout << "Vehicle: " << '\n';
	cout << "Enter the manufacturer: ";
	getline(cin, maker);

	cout << "Enter the year built: ";
	cin >> year;

	v.getInfo(maker, year);
	v.displayInfo();
	cout << '\n';

	cout << "Car: " << '\n';
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, maker);

	cout << "Enter the year built: ";
	cin >> year;

	cout << "Enter the number of doors: ";
	cin >> doors;

	c.getInfo(maker, year, doors);
	c.displayInfo();
	cout << '\n';

	cout << "Truck: " << '\n';
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, maker);

	cout << "Enter the year built: ";
	cin >> year;

	cout << "Enter the towing capacity: ";
	cin >> tow;

	t.getInfo(maker, year, tow);
	t.displayInfo();

	return 0;
}