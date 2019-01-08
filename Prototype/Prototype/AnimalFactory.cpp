#include "AnimalFactory.h"
#include "Cat.h"
#include "Dog.h"

// Register instances
Animal* AnimalFactory::__animalPrototypes[] = { new Cat(), new Dog() };

// Make new instance from prototype instance
Animal* AnimalFactory::MakeAnimal(Animal::AnimalType animalType)
{
	return __animalPrototypes[animalType]->Clone();
}