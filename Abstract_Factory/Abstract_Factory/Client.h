#pragma once

class WidgetFactory;
class ScrollBar;
class Window;


class Client
{
public:

	Client(WidgetFactory& wf);
	virtual ~Client();

	void Test() const;

private:
	WidgetFactory & _widgetFactory;
	ScrollBar* _scrollBar;
	Window* _window;
};

