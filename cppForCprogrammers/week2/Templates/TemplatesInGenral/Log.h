#pragma once

using namespace std;

class Log {
	Log();
public:
	template <class T>
	static void printLog(T var) {
		cout << "Value printed " << var << " Type is: " << typeid(var).name() << endl;
	}
};