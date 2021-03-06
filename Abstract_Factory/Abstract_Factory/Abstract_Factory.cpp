// Abstract_Factory.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "WidgetFactory.h"
#include "PMWidgetFactory.h"
#include "MotifWidgetFactory.h"
#include "ScrollBar.h"
#include "Window.h"

#include "Client.h"

using namespace std;

int main()
{
	cout << __FUNCTION__ << endl;

	PMWidgetFactory pmWF;
	MotifWidgetFactory mtWF;

	Client pmClient(pmWF);
	Client mtClient(mtWF);

	pmClient.Test();

	mtClient.Test();

    return 0;
}

