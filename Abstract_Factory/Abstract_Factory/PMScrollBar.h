#pragma once
#include "ScrollBar.h"
class PMScrollBar :
	public ScrollBar
{
public:
	PMScrollBar();
	virtual ~PMScrollBar();

	void ScrollUp() override;
	void ScrollDown() override;

};

