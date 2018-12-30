#include "Client.h"
#include <iostream>

#include "WidgetFactory.h"
#include "ScrollBar.h"
#include "Window.h"

using namespace std;


Client::Client(WidgetFactory& wf) : widgetFactory{ wf } {
	cout << __FUNCTION__ << endl;

	scrollBar = widgetFactory.CreateScrollBar();
	window = widgetFactory.CreateWindow();
}

Client::~Client()
{
	if (scrollBar != nullptr)
	{
		delete scrollBar;
	}
	if (window != nullptr)
	{
		delete window;
	}
}

void Client::Test() const
{
	cout << __FUNCTION__ << endl;

	scrollBar->ScrollUp();
	scrollBar->ScrollDown();

	window->Maximize();
	window->Minimize();
}