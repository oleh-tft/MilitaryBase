#include "Vehicle.h"

Vehicle::Vehicle(double petrol_amount, double tank_volume)
{
	this->petrol_amount = petrol_amount;
	this->tank_volume = tank_volume;
}

double Vehicle::GetTankVolume() const
{
	return tank_volume;
}

double Vehicle::GetPetrolAmount() const
{
	return petrol_amount;
}

void Vehicle::Arrive()
{
	Base::vehicles_on_base++;
	Base::people_on_base++;
}

bool Vehicle::Leave()
{
	double petrolRequired = tank_volume - petrol_amount;

	if (Base::people_on_base == 0)
	{
		cout << "No people on base!" << endl;
		return false;
	}

	if (Base::vehicles_on_base == 0)
	{
		cout << "No vehicles on base!" << endl;
		return false;
	}

	if (Base::petrol_on_base < petrolRequired)
	{
		cout << "Not enough petrol on base!" << endl;
		return false;
	}

	petrol_amount += petrolRequired;
	Base::petrol_on_base -= petrolRequired;
	Base::vehicles_on_base--;
	Base::people_on_base--;

	return true;
}
