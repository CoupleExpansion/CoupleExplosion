#include "Title.h"

Title::Title()
{
	__super::Init("Title");
	__super::SetDrawOrder(0.0f);
}

Title::~Title()
{

}

void Title::UpDate()
{

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