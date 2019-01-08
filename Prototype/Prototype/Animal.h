#pragma once
class Animal
{
public:

	enum AnimalType { CAT, DOG };

	Animal();

	virtual void Move() = 0;

	virtual Animal* Clone() = 0;

	virtual ~Animal();
};

