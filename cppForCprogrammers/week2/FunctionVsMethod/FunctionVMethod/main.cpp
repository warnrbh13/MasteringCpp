#include <iostream>
#include "class.h"

extern std::vector <alfret_t> vAlfret;
extern std::vector<benja_t> vBenja;

/* Template test to show how to instance works*/
template <class ele>
void printAny(ele val)
{
	std::cout << valu << std::endl;
}

int main() {
	AtmAlfret atmA;

	alfret_t a = {"aelm1", 1};
	benja_t b = {"belem1", 1};
	alfret_t a1 = {"aelem2", 2};
	benja_t b2 = {"belem2", 2};

	atmA.pushback2vector<alfret_t>(a, vAlfret);
	atmA.pushback2vector<alfret_t>(a1, vAlfret);
	atmA.pushback2vector<alfret_t>(a1, vAlfret);
	atmA.pushback2vector<alfret_t>(a, vAlfret);

	for (std::vector<alfret_t>::iterator i = vAlfret.begin(); vAlfret.end() != i; ++ i)
	{
		std::cout << i.operator*() << std::endl;
	}

	std::cin.get();
	return 0;
}

