#include <iostream>

#include "Client.h"
#include "Animal.h"
#include "Dog.h"


Client::Client()
{
}

void Client::Run() const
{
	// Test 1: polymorphism
	Animal* dog = Dog::GetInstance();
	dog->CheckInstanceNull();
	dog->Move();

	std::cout << std::endl;

	// Test 2: normal test
	Dog::GetInstance()->Move();
	Dog::GetInstance()->Move();
	Dog::GetInstance()->Move();

	std::cout << std::endl;

	// Test 3: downcast
	Dog* dog1 = (Dog*) Dog::GetInstance();
	dog1->GetInstance()->Move();

}


Client::~Client()
{
}
