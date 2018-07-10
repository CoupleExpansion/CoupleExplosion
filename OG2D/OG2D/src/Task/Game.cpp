#include "Game.h"
#include "Player.h"
#include "Back.h"
#include "Couple.h"

Game::Game()
{
	__super::Init("Game");
	__super::SetDrawOrder(0.0f);
	auto back = Back::Create("Stage1.jpg", OGge->camera->GetSize());
	auto player = Player::Create(Vec2(100, 100));

	coupleTex.Create("icha.png");
	rm->SetTextureData("couple", &this->coupleTex);

	Couple::Create();
}

Game::~Game()
{

}

void Game::UpDate()
{

}

void Game::Render2D()
{

}

Game::SP Game::Create()
{
	Game::SP to = Game::SP(new Game());
	if (to)
	{
		to->me = to;
		OGge->SetTaskObject(to);
		return to;
	}
	return nullptr;
}