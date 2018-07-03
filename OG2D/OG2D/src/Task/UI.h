#pragma once

#include "OGSystem\OGsystem.h"
#include "Object\Object.h"

class UI : public TaskObject, public GameObject
{
public:
	UI();
	virtual ~UI();
	typedef std::shared_ptr<UI> SP;
	static SP Create();
	void UpDate();
	void Render2D();
};