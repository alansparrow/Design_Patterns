#pragma once
#include "Animal.h"
class Cat :
	public Animal
{
public:
	Cat();

	void Move() override;

	Animal* Clone() override;

	virtual ~Cat();
};

