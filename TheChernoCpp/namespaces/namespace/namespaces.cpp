#include <iostream>
#include "Human.h"
#include "Saiyan.h"
#include "Sniff.h"

using namespace Hydra;

int main()
{
	Human h;
	Saiyan s;
	h.printData();
	s.printData();
	Sniff sniffer;
	sniffer.dummy();
	std::cin.get();
	return 0;
}