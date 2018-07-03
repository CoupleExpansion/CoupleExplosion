#include "Map.h"

Map::Map()
{
	__super::Init("Map");
	__super::SetDrawOrder(0.0f);
}

Map::~Map()
{

}

void Map::UpDate()
{

}

void Map::Render2D()
{

}

Map::SP Map::Create()
{
	Map::SP to = Map::SP(new Map());
	if (to)
	{
		to->me = to;
		OGge->SetTaskObject(to);
		return to;
	}
	return nullptr;
}