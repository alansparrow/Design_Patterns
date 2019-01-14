#pragma once
class Animal
{
public:
	virtual void Move() const = 0;
	virtual void CheckInstanceNull() const = 0;

protected:
	static Animal * self;

	Animal() {}
};

