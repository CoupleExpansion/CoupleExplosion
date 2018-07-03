#include "Ending.h"

Ending::Ending()
{
	__super::Init("Ending");
	__super::SetDrawOrder(0.0f);
}

Ending::~Ending()
{

}

void Ending::UpDate()
{

}

void Ending::Render2D()
{

}

Ending::SP Ending::Create()
{
	Ending::SP to = Ending::SP(new Ending());
	if (to)
	{
		to->me = to;
		OGge->SetTaskObject(to);
		return to;
	}
	return nullptr;
}