#pragma once

#include "OGSystem\OGsystem.h"
#include "Object\Object.h"
class Map : public TaskObject
{
public:
	Map();
	virtual ~Map();
	typedef std::shared_ptr<Map> SP;
	static SP Create();
	void UpDate();
	void Render2D();
};