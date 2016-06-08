#pragma once
class Definition
{
private:
	int value;
public:
	Definition();
	Definition(const Definition &src);
	~Definition();

	Definition& operator = (const Definition &src);
	bool operator != (const Definition &src);
	bool operator >(const Definition &src);
	//friend const Definition operator ++ (Definition &src);
};

