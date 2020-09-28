#pragma once
#include <iostream>

//namespace SL {
	class Log {
	public:
		int LogLevel;
		void LogSy(std::string str) {
			std::cout << "SecLog:" << str << std::endl;
		};
	};
//}