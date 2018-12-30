#include "MotifWidgetFactory.h"
#include "MotifScrollBar.h"
#include "MotifWindow.h"


MotifWidgetFactory::MotifWidgetFactory()
{
}


MotifWidgetFactory::~MotifWidgetFactory()
{
}

ScrollBar* MotifWidgetFactory::CreateScrollBar() const
{
	return new MotifScrollBar;
}

Window* MotifWidgetFactory::CreateWindow() const
{
	return new MotifWindow;
}
