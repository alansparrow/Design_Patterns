#pragma once
#include "ScrollBar.h"
class MotifScrollBar :
	public ScrollBar
{
public:
	MotifScrollBar();
	virtual ~MotifScrollBar();

	void ScrollUp() override;
	void ScrollDown() override;
};

