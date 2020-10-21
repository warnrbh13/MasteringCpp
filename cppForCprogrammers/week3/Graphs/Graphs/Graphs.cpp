#include "Graphs.h"
#include <iostream>
#include <ctime>
#include <random>

inline void log(int val)
{
	std::cout << val << std::endl;
}

using namespace std;
const int gSize = 4;
int main()
{
	bool** graph;
	// Construction of the graph
	graph = new bool*[gSize];
	
	default_random_engine seed;
	uniform_real_distribution<double> probs(0.0, 1.0);

	//for (int i = 0 ; i < 10 ; ++i)
	//{
		std::cout << "Prob: " << probs  << std::endl;
	//}

	cout << "Test:" << (1 < 3) << endl;

	cin.get();
	return 0;
}