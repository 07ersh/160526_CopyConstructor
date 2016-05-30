#include "stdafx.h"
#include "Python.h"


Python::Python(char* aName)
{
	std::cout << "Simple ctor" << std::endl;
	m_name = new char[strlen(aName) + 1];
	//strcpy(m_name, aName);
	this->m_name = aName;
}

Python::Python(const Python &arg) 
{
	std::cout << "Copy ctor" << std::endl;
	this->m_name = new char[strlen(arg.m_name) + 1];
	m_name = arg.m_name;

}


Python::~Python()
{

	std::cout << "Destr ctor" << std::endl;
	delete[] m_name;
}


void Python::ShowInfo() 
{
	std::cout << m_name << std::endl;
}