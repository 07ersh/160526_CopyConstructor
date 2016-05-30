#pragma once
class Matrix_cl
{
	//int size = 0;
	int x = 0;
	int y = 0;
	int* data = nullptr;
public:
	Matrix_cl(int x, int y);

	~Matrix_cl();

	Matrix_cl(const Matrix_cl &arg);

	void LogOut();
};

