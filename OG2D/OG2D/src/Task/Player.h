#pragma once

#include "OGSystem\OGsystem.h"
#include "Object\Object.h"
class Player : public GameObject, public TaskObject
{
public:
	Player();
	virtual ~Player();
	typedef std::shared_ptr<Player> SP;
	static SP Create();
	void UpDate();
	void Render2D();
};