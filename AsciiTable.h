#pragma once
#include "KeyValue.h"


class AsciiTable
{
public:
	std::vector<KeyValue> asciimap;
	AsciiTable() {};
	const char & operator[](int i ) const { return asciimap[i].key; }

 };
