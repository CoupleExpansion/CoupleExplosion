#pragma once

#include "OGSystem\OGsystem.h"

class Ending : public TaskObject
{
public:
	Ending();
	virtual ~Ending();
	typedef std::shared_ptr<Ending> SP;
	static SP Create();
	void UpDate();
	void Render2D();
};