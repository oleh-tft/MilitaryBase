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
}

bool Truck::Leave()
{
	return false;
}
