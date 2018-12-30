#pragma once
#include "Window.h"
class MotifWindow :
	public Window
{
public:
	MotifWindow();
	virtual ~MotifWindow();

	void Maximize() const override;
	void Minimize() const override;
};

