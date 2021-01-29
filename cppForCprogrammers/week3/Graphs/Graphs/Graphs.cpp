#include "Graphs.h"
#include <iostream>
#include <random>
#include <chrono>
#include <vector>

inline void log(int val)
{
	std::cout << val << std::endl;
}

using namespace std;
int main()
{
	unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	default_random_engine generator(seed);
	uniform_real_distribution<double> distribution(0.0, 1.0);
	const int gSize = 4;
	bool** pGraph;
	pGraph = new bool*[gSize];
	for (int i = 0; i < gSize; ++i)
	{
		cout << "Random Probs: " << distribution(generator) << endl;
	}

	for(int i = 0 ; i < gSize ; ++i)
	{
		pGraph[i] = new bool[gSize];
	}

	for (int i = 0; i < gSize; ++i)
	{
		for (int j = 0 ; j < gSize ; ++j) 
		{
			if (i == j)
				pGraph[i][j] = pGraph[j][i] = 0;
			else
				pGraph [j][i] = pGraph[i][j] = static_cast<bool>( 0.9 < distribution(generator));
		}
	}

	for (int i = 0; i < gSize; ++i)
	{
		for (int j = 0; j < gSize; ++j)
		{
			cout << pGraph[i][j];
		}
		cout << endl;
	}
	cout << "Graph constructred" << endl;

	Graphs G;
	cout << "It's connected? " << G.is_connected(pGraph, gSize) << endl;
	return 0;
}