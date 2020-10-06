#pragma once
#include <iostream>

typedef enum class Days
{
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
	SUNDAY
}Days_t;

class Date 
{
public:
	Date();
	void setDay(Days day);
	void incDay();
	void printDate();

	Days_t m_day;

};