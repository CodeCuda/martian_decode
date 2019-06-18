#pragma once
#include "AngleTable.h"
#include"AsciiTable.h" 
#include "HexMap.h"

class HexCircle
{
public:
	AngleTable angle;
	AsciiTable table;
	HexMap hex;
	HexCircle() {};
	void Range(int);
	void InRange(char);
	void Hex2int(char, char);
	void Encode();
	void Decode(std::string);


};
