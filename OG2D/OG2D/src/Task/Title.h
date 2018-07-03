#pragma once

#include "OGSystem\OGsystem.h"

class Title : public TaskObject
{
public:
	Title();
	virtual ~Title();
	typedef std::shared_ptr<Title> SP;
	static SP Create();
	void UpDate();
	void Render2D();
};