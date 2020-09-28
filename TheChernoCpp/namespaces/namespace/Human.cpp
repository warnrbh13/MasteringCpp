#include <iostream>
#include "Human.h"

Human::Human()
{
	d = { 25, 1.60, "Goku" };
}

Human::Human(int age, double height, std::string name)
{
	d.age_m = age;
	d.height_m = height;
	d.name_m = name;
}

std::ostream& operator<<(std::ostream& stream, Human::data& d)
{
	stream << "Age: " << d.age_m << ", " <<
			  "Height: " << d.height_m << ", " <<
			  "Name: " << d.name_m;
	return stream;
}
