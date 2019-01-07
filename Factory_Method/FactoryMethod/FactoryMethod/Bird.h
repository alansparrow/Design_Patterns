#pragma once
#include "Animal.h"
class Bird :
	public Animal
{
public:
	Bird();

	void Move() override;

	virtual ~Bird();
};

