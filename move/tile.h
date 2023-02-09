#pragma once
#include <iostream> 
#include "coords.h"
#include "entity.h"

class tile
{
	char symbol;
	char* current;
	coords* t_cords;
	entity* t_content=nullptr;
public:
	tile(char _symbol, coords &_t_cords);
	tile(char _symbol, coords* _t_cords);
	tile(tile& copy);
	tile(tile* copy);
	//set
	void setTContent(entity* _entity);
	//get
	char getTSymbol();
	char* getTCurrent();
	coords* getTCords();
	entity* getTContent();
};

std::ostream& operator<<(std::ostream& out, tile& sample);
std::ostream& operator<<(std::ostream& out, tile* sample);
