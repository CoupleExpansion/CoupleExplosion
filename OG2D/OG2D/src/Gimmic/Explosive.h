#pragma once

#include "OGSystem\OGsystem.h"

class Explosive : public TaskObject
{
public:
	Explosive();
	virtual ~Explosive();
	typedef std::shared_ptr<Explosive> SP;
	static SP Create();
	void UpDate();
	void Render2D();
};