// FactoryMethod.cpp : Defines the entry point for the console application.
//

#include "Animal.h"
#include <iostream>

int main()
{
	Animal* cat = Animal::CreateAnimal(Animal::CAT);
	Animal* dog = Animal::CreateAnimal(Animal::DOG);
	Animal* fish = Animal::CreateAnimal(Animal::FISH);
	Animal* bird = Animal::CreateAnimal(Animal::BIRD);

	cat->Move();
	dog->Move();
	fish->Move();
	bird->Move();

	delete cat;
	delete dog;
	delete fish;
	delete bird;

    return 0;
}

