#pragma once
#include<iostream>
#include "Base.h"

using namespace std;

class Vehicle
{
	double petrol_amount;
	double tank_volume;

public:
	Vehicle(double petrol_amount, double tank_volume);
	double GetTankVolume()const;
	double GetPetrolAmount()const;
	virtual void Arrive();
	virtual bool Leave();
};

