#include <iostream>
#include "Calendar.h"

int main() {

	std::cout << "Hey I will test Class Enum and operators overloading!" << std::endl;
	Date date;

	date.printDate();
	date.setDay(Days_t::FRIDAY);
	date.printDate();
	date.incDay();
	date.printDate();
	date.incDay();
	date.printDate();
	date.incDay();
	date.printDate();

	std::cin.get();
	return 0;
}