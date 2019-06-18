#pragma once

#include <iostream>
#include <vector>
class KeyValue
{
public:
	int  value;
	char key;
	KeyValue() {};
	KeyValue(char s, int k): key(s),value (k) {};
	char  getKey() { return key; };
	int  getValue() { return value; };
	
};
