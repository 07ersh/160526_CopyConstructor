#pragma once
class Python
{
	char * m_name = nullptr;
public:
	Python(char* aName);
	Python(const Python &arg);
	~Python();

	void ShowInfo();
};

