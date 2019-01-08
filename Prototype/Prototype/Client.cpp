#include "Client.h"
#include "Animal.h"
#include "AnimalFactory.h"

Client::Client()
{
}

void Client::Run() const
{
	Animal* cat = AnimalFactory::MakeAnimal(Animal::CAT);
	Animal* dog = AnimalFactory::MakeAnimal(Animal::DOG);

	cat->Move();
	dog->Move();

	delete cat;
	delete dog;
}


Client::~Client()
{
}
