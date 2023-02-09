#include "location.h"

location::location()
{
	this->_loc_map = new loc_map(5, 5);
	this->player = new entity('j', new coords(1, 1));
	placeHero();
	system("pause");
	system("cls");
	this->_loc_map->showLMap();
	system("pause");
	system("cls");
	clearEntities();
	this->_loc_map->showLMap();
	system("pause");
	system("cls");
	changePlayerCoords(2, 2);
	placeHero();
	this->_loc_map->showLMap();
	system("pause");
	system("cls");
}

void location::placeHero()
{
	this->_loc_map->getTileLMap(this->player->getECords())->setTContent(this->player);
}

void location::clearEntities()
{
	this->_loc_map->getTileLMap(this->player->getECords())->setTContent(nullptr);
}

void location::changePlayerCoords(int i, int j)
{
	this->player->getECords()->setCoords(i, j);
}
