#include "Title.h"
#include "Game.h"
Title::Title()
{
	__super::Init("Title");
	__super::SetDrawOrder(0.0f);
}

Title::~Title()
{
	Game::Create();
}

void Title::UpDate()
{
	__super::Kill();
}

void Title::Render2D()
{

}

Title::SP Title::Create()
{
	Title::SP to = Title::SP(new Title());
	if (to)
	{
		to->me = to;
		OGge->SetTaskObject(to);
		return to;
	}
	return nullptr;
}