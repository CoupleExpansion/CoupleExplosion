#include "Player.h"

Player::Player()
{
	__super::Init("Player");
	__super::SetDrawOrder(0.0f);
}

Player::~Player()
{

}

void Player::UpDate()
{

}

void Player::Render2D()
{

}

Player::SP Player::Create()
{
	Player::SP to = Player::SP(new Player());
	if (to)
	{
		to->me = to;
		OGge->SetTaskObject(to);
		return to;
	}
	return nullptr;
}