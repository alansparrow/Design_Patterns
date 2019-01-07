#pragma once
#include "Animal.h"
class Fish :
	public Animal
{
public:
	Fish();

	void Move() override;

	virtual ~Fish();
};

