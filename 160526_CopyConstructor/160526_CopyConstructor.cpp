// 160526_CopyConstructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Python.h"


int main()
{

	{
		Python p1("myString");
		p1.ShowInfo();


		Python p2(p1);
		p2.ShowInfo();
	}

	system("pause");

    return 0;
}

