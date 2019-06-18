#include "FileHandler.h"



File::File(std::string str)
{
	stream.open(str, std::ios::in || std::ios::out);
	
};

File::~File()
{

	stream.close();

};
std::string File::ReadLine()
{
	std::string temp;
	std::getline(stream, temp);
	return temp;

};

void File::WriteChar(char c)
{
	stream << c;


};


void File:: WriteLine(std::string str)
{
	stream << str;
}
;
