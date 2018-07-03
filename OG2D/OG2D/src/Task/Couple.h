#pragma once

#include "OGSystem\OGsystem.h"
#include "Object\Object.h"
class Couple : public TaskObject,public GameObject
{
public:
	Couple();
	virtual ~Couple();
	typedef std::shared_ptr<Couple> SP;
	static SP Create();
	void UpDate();
	void Render2D();
};