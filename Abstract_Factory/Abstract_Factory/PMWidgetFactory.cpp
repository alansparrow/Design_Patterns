#include "PMWidgetFactory.h"
#include "PMScrollBar.h"
#include "PMWindow.h"


PMWidgetFactory::PMWidgetFactory()
{
}


PMWidgetFactory::~PMWidgetFactory()
{
}

ScrollBar* PMWidgetFactory::CreateScrollBar() const
{
	return new PMScrollBar;
}

Window* PMWidgetFactory::CreateWindow() const
{
	return new PMWindow;
}