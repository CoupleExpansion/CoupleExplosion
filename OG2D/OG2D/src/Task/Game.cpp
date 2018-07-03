#include "Game.h"

Game::Game()
{
	__super::Init("Game");
	__super::SetDrawOrder(0.0f);
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