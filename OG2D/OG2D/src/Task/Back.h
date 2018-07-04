#pragma once

#include "OGSystem\OGsystem.h"

class Back : public TaskObject
{
	Texture backImg;
	Vec2 size;
public:
	Back(const std::string&, const Vec2&);
	Back(const std::string&, const float, const float);
	Back(const std::string&, const int, const int);
	void Render2D();
	typedef std::shared_ptr<Back> SP;
	static SP Create(const std::string&, const Vec2&, bool = true);
	static SP Create(const std::string&, const float, const float, bool = true);
	static SP Create(const std::string&, const int, const int, bool = true);
	virtual ~Back();
};