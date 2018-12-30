#pragma once
class Window
{
public:
	Window();
	virtual ~Window();

	virtual void Maximize() const = 0;
	virtual void Minimize() const = 0;
};

