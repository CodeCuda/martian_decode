#pragma once
#include "KeyValue.h"
#include "HexMap.h"


class AngleTable
{
public:
	std::vector<KeyValue> circle;
	double angleIncrement = 22.5;
	HexMap hexc;
	AngleTable() {};
	const int & operator[](int i) const { return circle[i].value; }


};
