// Matrix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Matrix_cl.h"


int main()
{
	int x, y;
	std::cout << "x = "; std::cin >> x;
	std::cout << "y = "; std::cin >> y;

	{
		Matrix_cl matr(x, y);
		matr.LogOut();
		
		std::cout << std::endl;

		Matrix_cl newMatr(matr);
		newMatr.LogOut();

	}

	system("pause");
    return 0;
}

