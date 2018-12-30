#include "Client.h"
#include <iostream>

#include "WidgetFactory.h"
#include "ScrollBar.h"
#include "Window.h"

using namespace std;


Client::Client(WidgetFactory& wf) : _widgetFactory{ wf } {
	cout << __FUNCTION__ << endl;

	_scrollBar = _widgetFactory.CreateScrollBar();
	_window = _widgetFactory.CreateWindow();
}

Client::~Client()
{
	delete _scrollBar;
	delete _window;
}

void Client::Test() const
{
	cout << __FUNCTION__ << endl;

	_scrollBar->ScrollUp();
	_scrollBar->ScrollDown();

	_window->Maximize();
	_window->Minimize();
}