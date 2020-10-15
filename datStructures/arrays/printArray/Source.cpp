#include <iostream>

class Dvd 
{
public:
	std::string m_movieName;
	std::string m_description;
	int m_year;

public:
	void setName(std::string movieName) 
	{
		this->m_movieName = movieName;
	}

	void setDescription(std::string description) 
	{
		this->m_description = description;
	}

	void setYear(int year) 
	{
		this->m_year = year;
	}

};

std::ostream& operator<< (std::ostream& stream, Dvd& d)
{
	stream << d.m_description << d.m_movieName << d.m_year;
	return stream;
}


int main() {

	Dvd *dvd = new Dvd[15];
	Dvd d[10];
	d[1] = {"1917", "This is a movie about war", 2019};

	std::cout << d[1] << std::endl;


	return 0;
}