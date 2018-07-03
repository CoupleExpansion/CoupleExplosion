#include "Couple.h"

Couple::Couple()
{
	__super::Init("Couple");
	__super::SetDrawOrder(0.0f);
}

Couple::~Couple()
{

}

void Couple::UpDate()
{

}

void Couple::Render2D()
{

}

Couple::SP Couple::Create()
{
	Couple::SP to = Couple::SP(new Couple());
	if (to)
	{
		to->me = to;
		OGge->SetTaskObject(to);
		return to;
	}
	return nullptr;
}