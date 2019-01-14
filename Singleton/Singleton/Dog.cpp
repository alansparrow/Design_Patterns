#include "Animal.h"
#include "Dog.h"
#include <iostream>

void Dog::Move() const
{
	std::cout << self << ": Dog runs fast!" << std::endl;
}

void Dog::CheckInstanceNull() const
{
	std::cout << "self == " << self << std::endl;
}

Animal* Dog::GetInstance()
{
	if (self == nullptr)
	{
		self = new Dog();		
	}

	return self;
}
