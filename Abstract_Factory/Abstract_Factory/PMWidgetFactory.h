#pragma once
#include "WidgetFactory.h"
class PMWidgetFactory : public WidgetFactory
{
public:	
	PMWidgetFactory();
	~PMWidgetFactory();

	ScrollBar* CreateScrollBar() const override;
	Window* CreateWindow() const override;
};

