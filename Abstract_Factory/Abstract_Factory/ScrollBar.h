#pragma once
class ScrollBar
{
public:
	ScrollBar();
	virtual ~ScrollBar();

	virtual void ScrollUp() = 0;
	virtual void ScrollDown() = 0;
	
};

