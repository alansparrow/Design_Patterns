#include "Cat.h"
#include <iostream>


Cat::Cat()
{
}

void Cat::Move()
{
	std::cout << "Cat walk silently" << std::endl;
}

Animal* Cat::Clone()
{
	return new Cat();
}


Cat::~Cat()
{
}
