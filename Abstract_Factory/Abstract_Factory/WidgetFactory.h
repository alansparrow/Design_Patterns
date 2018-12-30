#pragma once

class ScrollBar;
class Window;

class WidgetFactory
{
public:
	virtual ScrollBar* CreateScrollBar() const = 0;
	virtual Window* CreateWindow() const = 0;
	virtual ~WidgetFactory();
};

