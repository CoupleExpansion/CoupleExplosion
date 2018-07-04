#include "Player.h"
#include "Map.h"
Player::Player(const Vec2& pos)
{
	__super::objectTag = "Player";	//オブジェクトタグ指定
	__super::Init(__super::objectTag);	//タグ指定
	__super::SetDrawOrder(0.0f);	//描画順登録
	__super::CreateObject(Cube, pos, Vec2(64, 64));	//オブジェクト生成
	this->mode = new Mode;
	this->SetMode(Mode::Cursor);
	this->draw = new Box2D;
	this->src = new Box2D;
}
Player::~Player()
{
	delete this->mode;
	delete this->draw;
	delete this->src;
}
void Player::UpDate()
{
	switch (*this->mode)
	{
	case Mode::Cursor:
		this->CursorUpDate();
		break;
	case Mode::Aiming:
		this->AimingUpDate();
		break;
	default:
		break;
	}
}
void Player::Render2D()
{
	if (this->image)
	{
		*draw = { this->position,this->Scale };
		draw->OffsetSize();
		*src = { Vec2(),this->image->GetTextureSize() };
		src->OffsetSize();
		this->image->Draw(*draw, *src);
	}	
}
void Player::CursorUpDate()
{
	this->InputMove();
	if (OGge->in->down(In::B2))
	{
		this->SetMode(Mode::Aiming);
	}
}
void Player::AimingUpDate()
{
	this->InputMove();
}
void Player::InputMove()
{
	//スティック入力の5倍の値をpositionに与える
	this->position.x += OGge->in->axis(In::AXIS_LEFT_X) * 5;
	this->position.y += OGge->in->axis(In::AXIS_LEFT_Y) * -5;
}
void Player::SetTexture(Texture* tex)
{
	this->image = tex;
}
void Player::SetMode(const Mode& mode)
{
	*this->mode = mode;
	switch (*this->mode)
	{
	case Mode::Aiming:
		this->SetTexture(rm->GetTextureData("Aiming"));
		break;
	case Mode::Cursor:
		this->SetTexture(rm->GetTextureData("Cursor"));
		break;
	default:
		break;
	}
	
}
Player::SP Player::Create(const Vec2& pos)
{
	Player::SP to = Player::SP(new Player(pos));
	if (to)
	{
		to->me = to;
		OGge->SetTaskObject(to);
		return to;
	}
	return nullptr;
}