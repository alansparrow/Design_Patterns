#pragma once
#include "Window.h"
class PMWindow :
	public Window
{
public:
	PMWindow();
	virtual ~PMWindow();

	void Maximize() const override;
	void Minimize() const override;
};

