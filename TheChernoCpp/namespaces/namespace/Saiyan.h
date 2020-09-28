#pragma once
#pragma once
#include <iostream>
#include <string>

class Saiyan {
private:
	struct data {
		int age_m;
		double height_m;
		std::string name_m;
	};
	data d;

public:
	Saiyan();
	Saiyan(int age, double height, std::string name);

	friend std::ostream& operator<<(std::ostream& stream, data& d);
	void printData()
	{
		std::cout << d << std::endl;
	}
	void setAge(int age)
	{
		d.age_m = age;
	}
	void setHeight(double height)
	{
		d.height_m = height;
	}
	void setName(std::string name)
	{
		d.name_m = name;
	}
};