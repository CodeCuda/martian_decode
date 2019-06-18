#pragma once
#include <iostream>
#include<fstream>
#include<string>

class File
{
public:
	
	File(std::string str);
	~File();
	std::string ReadLine();
	void  WriteChar(char );
	void  WriteLine(std::string);
	

	std::fstream stream;
	
 };