#pragma once
#include "Vehicle.h"

class Truck : public Vehicle
{
	double load;
	double max_load;

public:
	Truck(double load, double max_load, double petrol, double max_petrol);
	double GetCurrentLoad()const;
	double GetMaxLoad()const;
	void Arrive();
	bool Leave();
};

