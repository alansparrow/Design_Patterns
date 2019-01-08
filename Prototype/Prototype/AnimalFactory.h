#pragma once
#include "Animal.h"

class AnimalFactory
{
public:
	static Animal* MakeAnimal(Animal::AnimalType animalType);
private:
	static Animal* __animalPrototypes[2];
};

