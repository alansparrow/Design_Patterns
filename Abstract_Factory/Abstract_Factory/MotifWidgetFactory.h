#pragma once
#include "WidgetFactory.h"

class MotifWidgetFactory : public WidgetFactory
{
public:
	MotifWidgetFactory();
	~MotifWidgetFactory();

	ScrollBar* CreateScrollBar() const override;
	Window* CreateWindow() const override;
};

