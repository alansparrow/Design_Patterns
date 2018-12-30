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
	WidgetFactory & widgetFactory;
	ScrollBar* scrollBar;
	Window* window;
};

