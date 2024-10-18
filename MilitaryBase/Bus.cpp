#include "Bus.h"

Bus::Bus(int people, int max_people, double petrol, double max_petrol) : Vehicle(petrol, max_petrol)
{
	this->people = people;
	this->max_people = max_people;
}

int Bus::GetPeopleCount() const
{
	return people;
}

int Bus::GetMaxPeople() const
{
	return max_people;
}

void Bus::Arrive()
{
	Vehicle::Arrive();
	Base::people_on_base += people;
	people = 0;

	cout << "Bus arrived at the base." << endl << endl;
}

bool Bus::Leave()
{
	if (!Vehicle::Leave()) return false;

	int emptySeats = max_people - people;
	int toMove = emptySeats > Base::people_on_base ? Base::people_on_base : emptySeats;

	people += toMove;
	Base::people_on_base -= toMove;

	cout << "Bus left the base." << endl << endl;

	return true;
}
