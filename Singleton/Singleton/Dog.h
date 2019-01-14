#pragma once

class Dog :
	public Animal
{
public:
	static Animal* GetInstance();

	virtual void Move() const override;
	virtual void CheckInstanceNull() const override;

private:
	Dog() {};
};

