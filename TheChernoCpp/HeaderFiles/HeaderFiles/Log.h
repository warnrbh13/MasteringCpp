#pragma once
#include <iostream>

//namespace L{
	class Log{
	public:
		int LogLevel;
		void LogS(std::string str){
			std::cout << "Log:" << str <<std::endl;
		};
	};
//}