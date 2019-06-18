#include <iostream>
#include "Parser.h""
#include "FileHandler.h"
#include "HexCircle.h"


void HexCircle::Decode(std::string _file)
{

	File _f(_file);

	std::string str;

	std::string num;

	str = _f.ReadLine();



	Parser _p;


	_p.ParseRegex(str, num);




	for (auto i : _p.v)
		std::cout << "p : " << i << std::endl;
	KeyValue k;
	AngleTable _angle;
	HexMap hex;
	for (auto i : _p.v)
	{

		k.value = i;
		std::cout << "key :" << i << ' ';
		_angle.circle.push_back(k);
	}
	for (auto i : _p.v)
	{
		auto n = i / 22.5;
		//std::cout << _degree;

		if (n< 10.) n += 48.;

		else  n += 55.;
		k.key = n;
		hex.hexdigits.push_back(k);

	}
	std::string temp;
	AsciiTable table;
	for (auto i : hex.hexdigits)
		std::cout <<"Hex "<< i.key << std::endl;
	std::cout << "In ascii it will be :";
	for (auto i = 0; i != hex.hexdigits.size(); i=i+2)

	{


		temp += hex.hexdigits[i].key;
		temp+= hex.hexdigits[i + 1].key;
	
		k.key = (char)strtol(temp.c_str(), NULL, 16);
	
		
			
			std::cout << k.key;
			//std::cout << std::endl;
			table.asciimap.push_back(k);
		
		temp.clear();
	}
	//std::cout << "Ascii" <<k.key<< std::endl;




 }