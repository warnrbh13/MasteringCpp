#include <iostream>
#include "Log.h"


int main() {
	int var = 10;
	string str = "Hello you template";
	Log::printLog(var);
	Log::printLog(str);
	cin.get();
	return 0;
}