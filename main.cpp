#include <iostream>
#include "Parser.h""
#include "FileHandler.h"
#include "HexCircle.h"

int main()
{

		HexCircle c;
		std::string _file;
		std::cout << "Enter name of file :" << std::endl;
		std::cin >> _file;
		c.Decode(_file);
		
	

	return 0;
 }