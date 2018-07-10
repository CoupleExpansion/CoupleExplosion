#include "Couple.h"

Couple::Couple()
{
	__super::Init("Couple");
	__super::SetDrawOrder(0.0f);

	this->coupleTex = rm->GetTextureData("couple");
	this->position = Vec2(100, 100);
}

Couple::~Couple()
{

}

void Couple::UpDate()
{
	//ランダムウォーク
	//マウス追従
	Vec2 mousePos = OGge->in->mouse.GetPos();
	Vec2 toVec = mousePos - this->position;
	toVec.Normalize();
	this->position += toVec * 5.f;
	//爆発
}

void Couple::Render2D()
{
	Box2D draw(this->position, Vec2(166, 225));
	draw.OffsetSize();
	Box2D src(0, 0, 332, 450);
	this->coupleTex->Draw(draw, src);
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