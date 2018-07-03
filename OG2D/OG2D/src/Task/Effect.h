#pragma once

#include "OGSystem\OGsystem.h"
#include "Object\Object.h"
class Effect : public TaskObject,public GameObject
{
public:
	Effect();
	virtual ~Effect();
	typedef std::shared_ptr<Effect> SP;
	static SP Create();
	void UpDate();
	void Render2D();
};