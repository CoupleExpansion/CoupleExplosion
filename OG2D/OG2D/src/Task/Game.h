#pragma once

#include "OGSystem\OGsystem.h"

class Game : public TaskObject
{
	Texture coupleTex;
public:
	Game();
	virtual ~Game();
	typedef std::shared_ptr<Game> SP;
	static SP Create();
	void UpDate();
	void Render2D();
};