#include "UI.h"

UI::UI()
{
	__super::Init("UI");
	__super::SetDrawOrder(0.0f);
}

UI::~UI()
{

}

void UI::UpDate()
{

}

void UI::Render2D()
{

}

UI::SP UI::Create()
{
	UI::SP to = UI::SP(new UI());
	if (to)
	{
		to->me = to;
		OGge->SetTaskObject(to);
		return to;
	}
	return nullptr;
}