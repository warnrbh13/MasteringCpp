#include "Solution.h"

#define LOG(var) cout << var << endl;
int main() {
	
	Solution s;
	vector<int> input{10,20,30,40};

	for (int i = 0 ; i < input.size() ; ++i) {
		std::cout << input[i] << endl;
	}

	//s.findNumbers(input);

	return 0;
}