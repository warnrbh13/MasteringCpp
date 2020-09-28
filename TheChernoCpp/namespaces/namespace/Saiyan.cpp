#include <iostream>
#include "Saiyan.h"

Saiyan::Saiyan()
{
	d = { 20, 1.20, "Krillin" };
}

Saiyan::Saiyan(int age, double height, std::string name)
{
	d.age_m = age;
	d.height_m = height;
	d.name_m = name;
}

std::ostream& operator<<(std::ostream& stream, Saiyan::data& d)
{
	stream << "Age: " << d.age_m << ", " <<
		"Height: " << d.height_m << ", " <<
		"Name: " << d.name_m;
	return stream;
}
