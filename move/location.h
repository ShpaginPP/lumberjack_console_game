#pragma once
#include "loc_map.h"

class location
{
	loc_map* _loc_map;
	entity* player;
public:
	location();
	void placeHero();
	void clearEntities();
	void changePlayerCoords(int i, int j);
};

