#pragma once
class Animal
{
public:
	enum AnimalType { CAT, DOG, FISH, BIRD };

	// factory method
	static Animal* CreateAnimal(AnimalType animalType);

	Animal();

	virtual void Move() = 0;

	virtual ~Animal();
};

