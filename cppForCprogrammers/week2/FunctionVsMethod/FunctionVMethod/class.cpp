#include "class.h"

std::vector<alfret_t> vAlfret;
std::vector<benja_t> vBenja;

template<typename T>
void AtmAlfret::pushback2vector(T& s, std::vector<T>& v)
{
	v.push_back(s);
}
template void AtmAlfret::pushback2vector(alfret_t& s, std::vector<alfret_t>& v);
template void AtmAlfret::pushback2vector(benja_t& s, std::vector<benja_t>& v);

std::ostream &operator<<(std::ostream& stream, Alfret& s)
{
	stream << "age: " << s.age_m << " babe: " << s.instaBabe_m;
	return stream;
}
