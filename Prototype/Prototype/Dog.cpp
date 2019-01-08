#include "Dog.h"
#include <iostream>


Dog::Dog()
{
}

void Dog::Move()
{
	std::cout << "Dog run fast" << std::endl;
}

Animal* Dog::Clone()
{
	return new Dog();
}


Dog::~Dog()
{
}
