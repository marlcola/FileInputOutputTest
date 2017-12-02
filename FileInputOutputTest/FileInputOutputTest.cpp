// FileInputOutputTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>

int main()
{
	std::ifstream ifs("Text.txt");

	std::ofstream ofs("Output.txt");

	char str[256];

	if (ifs.fail())
	{
		std::cerr << "失敗" << std::endl;
		return -1;
	}

	if (ofs.fail())
	{
		std::cerr << "失敗" << std::endl;	
	}

	while (ifs.getline(str, 256 - 1))
	{
		ofs << str << std::endl;
		//std::cout << "[" << str << "]" << std::endl;
	}
	
    return 0;
}

