#pragma once
#include "Animal.h"

class Cat :
	public Animal
{
public:
	Cat();

	void Move() override;

	virtual ~Cat();
};

