#pragma once
#include <iostream>
#include <string>
#include <vector>

class Parser
{
    public:
	std::string& ParseRegex(std::string& , std::string&);
	std::string& ParseString(std::string, std::string&);
	void ParseNumber(std::string);
	void Show()
	{
		for (auto i : vstring)
			std::cout << i << std::endl;

	};
	

	std::vector<double> v;
		std::vector<std::string> vstring;
		
};