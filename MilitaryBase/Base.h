#pragma once
class Base
{
public:
	static int people_on_base;
	static int vehicles_on_base;
	static double petrol_on_base;
	static double goods_on_base;

	static void Print();
};

int Base::people_on_base = 108;
int Base::vehicles_on_base = 12;
double Base::petrol_on_base = 2600.0;
double Base::goods_on_base = 1120.0;

