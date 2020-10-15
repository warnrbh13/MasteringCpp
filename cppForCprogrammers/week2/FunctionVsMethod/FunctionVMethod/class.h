#pragma once
#include <iostream>
#include <vector>

typedef struct Alfret
{
public: 
	std::string instaBabe_m = "Alexis Rein";
	int age_m = 28;

	friend std::ostream& operator<<(std::ostream& stream, Alfret& s);
}alfret_t;

typedef struct Benja
{
	std::string instaBabe_m = "Fiona Ya";
	int age_m = 25;
}benja_t;

class AtmAlfret 
{

public:
	template<typename T>
	static void pushback2vector(T& s, std::vector<T>& v);

};

