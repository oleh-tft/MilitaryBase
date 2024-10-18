#include<iostream>
#include"Base.h"
#include"Bus.h"
#include"Truck.h"

using namespace std;

int Base::people_on_base = 68;
int Base::vehicles_on_base = 0;
double Base::petrol_on_base = 3600.0;
double Base::goods_on_base = 1820.0;

int main()
{
	Base base;
	base.Print();

	Vehicle* truck1 = new Truck(900.0, 1500.0, 200.0, 1200.0);
	truck1->Arrive();

	Vehicle* truck2 = new Truck(0.0, 800.0, 500.0, 900.0);
	truck2->Arrive();
	
	Vehicle* bus1 = new Bus(31, 31, 280.0, 1000.0);
	bus1->Arrive();

	Vehicle* bus2 = new Bus(5, 40, 700.0, 1200.0);
	bus2->Arrive();

	Vehicle* bus3 = new Bus(0, 46, 500.0, 1500.0);
	bus3->Arrive();

	base.Print();

	if (bus3->Leave()) delete bus3;
	base.Print();

	if (bus1->Leave()) delete bus1;
	base.Print();

	if (truck1->Leave()) delete truck1;
	base.Print();

	if (bus2->Leave()) delete bus2;
	base.Print();

	Vehicle* bus4 = new Bus(27, 30, 200.0, 1600.0);
	bus4->Arrive();
	base.Print();

	if (bus4->Leave()) delete bus4;
	base.Print();

	delete truck2;
}