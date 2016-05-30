#include "stdafx.h"
#include "Matrix_cl.h"


Matrix_cl::Matrix_cl(int x, int y)
{
	this->x = x;
	this->y = y;

	if (data == nullptr) 
	{
		return;
	}

	data = new int[x*y];	
	for (int i = 0; i < x*y; i++) 
	{
		data[i] = i;
	}
}

Matrix_cl::Matrix_cl(const Matrix_cl &arg)
{
	x = arg.x;
	y = arg.y;
	data = new int[x*y];
	for (int i = 0; i <x*y; i++)
	{
		data[i] = arg.data[i];
	}
}



void Matrix_cl::LogOut()
{
	for (int i = 0; i < x; i++) 
	{
		for (int j = 0; j < y; j++) 
		{
			std::cout << j << " ";
		}
		std::cout << std::endl;
	}
}



Matrix_cl::~Matrix_cl()
{
	delete[] data;
	x = 0;
	y = 0;
	//size = 0;
}
