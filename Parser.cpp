#include  "Parser.h"
#include  <iterator>
#include <algorithm>

std::string& Parser::ParseRegex(std::string &line, std::string &num)
{

	
	if (line.length()==1) return num;
	auto pos  =line.find('(');
	auto postpos = line.find(')')+1;
	
	if (line[pos + 1]==',' ) exit(EXIT_FAILURE);
	
	ParseString(line.substr(pos + 1, postpos - pos) ,num);
	line.erase(pos, postpos);
	
	ParseRegex(line, num);
	

	
}



std::string& Parser:: ParseString(std::string str, std::string &num )
{
	int i = 0;
	
	while (str[i] != ',' && str[i] != ')')
	{
		
		num += str[i];
		i++;

	}
	if (str[i] == ',')
	{
		ParseNumber(num);
		num += ' ';
		ParseString(str.substr(i + 1), num);
	}
	if (str[i] == ')')
	{
		num.erase(num.begin(),num.begin() + i+1);
		ParseNumber(num);
		vstring.push_back(num);
		num.clear();
		return num;
	}
}
void  Parser::ParseNumber(std::string num)
{
    v.push_back(strtol(num.c_str(), NULL, 10));
}