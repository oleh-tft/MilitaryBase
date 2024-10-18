#include "Truck.h"

Truck::Truck(double load, double max_load, double petrol, double max_petrol) : Vehicle(petrol, max_petrol)
{
	this->load = load;
	this->max_load = max_load;
}

double Truck::GetCurrentLoad() const
{
	return load;
}

double Truck::GetMaxLoad() const
{
	return max_load;
}

void Truck::Arrive()
{
	Vehicle::Arrive();
	Base::goods_on_base += load;
	load = 0;

	cout << "Truck arrived at the base." << endl << endl;
}

bool Truck::Leave()
{
	if (!Vehicle::Leave()) return false;

	double emptySpace = max_load - load;
	int toMove = emptySpace > Base::goods_on_base ? Base::goods_on_base : emptySpace;

	load += toMove;
	Base::goods_on_base -= toMove;

	cout << "Truck left the base." << endl << endl;

	return true;
}
