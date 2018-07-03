#include "Effect.h"

Effect::Effect()
{
	__super::Init("Effect");
	__super::SetDrawOrder(0.0f);
}

Effect::~Effect()
{

}

void Effect::UpDate()
{

}

void Effect::Render2D()
{

}

Effect::SP Effect::Create()
{
	Effect::SP to = Effect::SP(new Effect());
	if (to)
	{
		to->me = to;
		OGge->SetTaskObject(to);
		return to;
	}
	return nullptr;
}