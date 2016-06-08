// ReDefinition.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class B
{
protected:
	int c;
public:
	B(int Value):c(Value){}
	bool operator < (const B& right)
	{
		return c < right.c;
	}
};



int main()
{
	B z(3);
	B x(5);

	if(z < x)
	{
		std::cout << "less" << std::endl;

	}
	else
	{
		std::cout << "greater" << std::endl;
	}
	std::cout << std::endl;

	system("pause");
    return 0;
}

