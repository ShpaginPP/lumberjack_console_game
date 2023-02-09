#include "loc_map.h"

void loc_map::createMap()
{
	this->l_map = new tile * *[this->mp_len];
	for (int i = 0; i < this->mp_len; i++)
		this->l_map[i] = new tile * [this->mp_wid];
	setAbyss();
	setGrass();
}

void loc_map::setAbyss()
{
	for (int i = 0; i < this->mp_len; i++)
		for (int j = 0; j < this->mp_wid; j++)
			this->l_map[i][j] = new abyss(new coords(i,j));
}

void loc_map::setGrass()
{
	for (int i = 1; i < this->mp_len-1; i++)
		for (int j = 1; j < this->mp_wid-1; j++)
			this->l_map[i][j] = new grass(new coords(i, j));
}

loc_map::loc_map(int _mp_len, int _mp_wid)
{
	this->mp_len = _mp_len;
	this->mp_wid = _mp_wid;
	createMap();
	showLMap();
}

int loc_map::getMLen()
{
	return this->mp_len;
}

int loc_map::getMWid()
{
	return this->mp_wid;
}

tile*** loc_map::getLMap()
{
	return this->l_map;
}

tile* loc_map::getTileLMap(int i, int j)
{
	return this->l_map[i][j];
}

tile* loc_map::getTileLMap(coords* sample)
{
	int i = sample->getX(), j = sample->getY();
	return this->l_map[i][j];
}

tile* loc_map::getTileLMap(coords& sample)
{
	int i = sample.getX(), j = sample.getY();
	return this->l_map[i][j];
}

void loc_map::showLMap()
{
	for (int i = 0; i < this->mp_len; i++)
	{
		for (int j = 0; j < this->mp_wid; j++)
		{
			std::cout << this->l_map[i][j];
		}
		std::cout << std::endl;
	}
}

loc_map::~loc_map()
{
	delete[] l_map;
}
