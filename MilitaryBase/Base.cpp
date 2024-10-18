#include "Base.h"
#include<iostream>

using namespace std;

void Base::Print()
{
	cout << "People on base: " << people_on_base << endl
		<< "Vehicles on base: " << vehicles_on_base << endl
		<< "Petrol on base: " << petrol_on_base << " liters" << endl
		<< "Goods on base: " << goods_on_base << " tons" << endl << endl;
}
