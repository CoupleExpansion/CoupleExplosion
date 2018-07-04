
#include "Explosive.h"
Explosive::Explosive()
{
	__super::Init("Explosive");
	__super::SetDrawOrder(0.0f);
}

Explosive::~Explosive()
{

}

void Explosive::UpDate()
{

}

void Explosive::Render2D()
{

}

Explosive::SP Explosive::Create()
{
	Explosive::SP to = Explosive::SP(new Explosive());
	if (to)
	{
		to->me = to;
		OGge->SetTaskObject(to);
		return to;
	}
	return nullptr;
}