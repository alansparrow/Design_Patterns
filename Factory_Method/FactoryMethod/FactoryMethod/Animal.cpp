#include "Animal.h"
#include <iostream>

#include "Cat.h"
#include "Dog.h"
#include "Fish.h"
#include "Bird.h"

Animal* Animal::CreateAnimal(AnimalType animalType)
{
	switch (animalType)
	{
		case CAT:
			return new Cat();
			break;
		case DOG:
			return new Dog();
			break;
		case FISH:
			return new Fish();
			break;
		case BIRD:
			return new Bird();
			break;
		default:
			return nullptr;
	}
}

Animal::Animal()
{
}

Animal::~Animal()
{
}
