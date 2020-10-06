#include "Calendar.h"

Date::Date() 
{
	m_day = Days::MONDAY;
}

// C++ Operators Overloading

Days_t& operator++(Days_t& day)
{
	day = static_cast<Days_t>((static_cast<int>(day) + 1) % 7);
	return day;
}

std::ostream& operator<<(std::ostream& stream, const Days_t& day)
{
	switch (day)
	{
	case Days::MONDAY:
		std::cout << "Monday";
		break;
	case Days::TUESDAY:
		std::cout << "Tuesday";
		break;
	case Days::WEDNESDAY:
		std::cout << "Wednesday";
		break;
	case Days::THURSDAY:
		std::cout << "Thursday";
		break;
	case Days::FRIDAY:
		std::cout << "Friday";
		break;
	case Days::SATURDAY:
		std::cout << "Saturday";
		break;
	case Days::SUNDAY:
		std::cout << "Sunday";
		break;
	default:
		break;
	}
	return stream;
}

static std::ostream& operator<<(std::ostream& stream, const Date& date)
{
	stream << date.m_day;
	return stream;
}


void Date::setDay (Days day)
{
	m_day = day;
}

void Date::incDay()
{
	++m_day;
}

void Date::printDate() 
{
	std::cout << "Day: " << m_day << std::endl;
}