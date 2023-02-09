#pragma once
#include "abyss.h"
#include "grass.h"

class loc_map
{
	tile*** l_map;
	int mp_len, mp_wid;

	void createMap();
	void setAbyss();
	void setGrass();
public:
	loc_map(int _mp_len, int _mp_wid);
	~loc_map();
	//get
	int getMLen();
	int getMWid();
	tile*** getLMap();
	tile* getTileLMap(int i, int j);
	tile* getTileLMap(coords* sample);
	tile* getTileLMap(coords& sample);
	//
	void showLMap();
};

