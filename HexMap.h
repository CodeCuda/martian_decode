#pragma once
#include "KeyValue.h"



class HexMap
{
public:
	std::vector <KeyValue> hexdigits;
	HexMap() {};
	int length() { return hexdigits.size(); };
	const int & operator[](int i) const { return hexdigits[i].value; };


};