#include "Back.h"

Back::Back(const std::string& path, const Vec2& size_)
{
	this->backImg.Create(path);
	this->size = size_;
	__super::Init("Back");
	__super::SetDrawOrder(0.0f);
}

Back::Back(const std::string& path, const float size_x, const float size_y)
{
	this->backImg.Create(path);
	this->size = { size_x,size_y };
	__super::Init("Back");
	__super::SetDrawOrder(0.0f);
}

Back::Back(const std::string& path, const int size_x, const int size_y)
{
	this->backImg.Create(path);
	this->size = { size_x,size_y };
	__super::Init("Back");
	__super::SetDrawOrder(0.0f);
}

Back::~Back()
{
	this->backImg.Finalize();
}

void Back::Render2D()
{
	Box2D draw(OGge->camera->GetPos(), this->size);
	draw.OffsetSize();
	Box2D src(0.f, 0.f, this->backImg.GetTextureSize().x, this->backImg.GetTextureSize().y);
	this->backImg.Draw(draw, src);
}

Back::SP Back::Create(const std::string& path, const Vec2& size_, bool flag)
{
	Back::SP to = Back::SP(new Back(path, size_));
	if (to)
	{
		to->me = to;
		if (flag)
		{
			OGge->SetTaskObject(to);
		}
		return to;
	}
	return nullptr;
}

Back::SP Back::Create(const std::string& path, const float x, const float y, bool flag)
{
	Back::SP to = Back::SP(new Back(path, x, y));
	if (to)
	{
		to->me = to;
		if (flag)
		{
			OGge->SetTaskObject(to);
		}
		return to;
	}
	return nullptr;
}

Back::SP Back::Create(const std::string& path, const int x, const int y, bool flag)
{
	Back::SP to = Back::SP(new Back(path, x, y));
	if (to)
	{
		to->me = to;
		if (flag)
		{
			OGge->SetTaskObject(to);
		}
		return to;
	}
	return nullptr;
}