#include "HashSet.h"
#include <iostream>
#include <unordered_set>

int main()
{
	std::unordered_set<int> hashset;
	hashset.insert(1);
	hashset.insert(2);
	hashset.insert(3);
	hashset.insert(4);
	hashset.insert(5);

	for (std::unordered_set<int>::iterator i = hashset.begin(); i != hashset.end(); ++i)
	{
		std::cout << i.operator*() << std::endl;
	}
	hashset.find(2);

	return false;
}