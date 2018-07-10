#pragma once

#include "OGSystem\OGsystem.h"
#include "Object\Object.h"
class Couple : public TaskObject,public GameObject
{
	enum Angle {
		LEFT,RIGHT,
	};
	enum State {
		RandomWalk,
		ChaseMouse,
		Explosion,
	};
	Angle angle;
	State state;
	Texture* coupleTex;

public:
	Couple();
	virtual ~Couple();
	typedef std::shared_ptr<Couple> SP;
	static SP Create();
	void UpDate();
	void Render2D();
};