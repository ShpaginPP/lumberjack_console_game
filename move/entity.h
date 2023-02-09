#pragma once
#include <iostream> 
#include "coords.h"

class entity
{
	char symbol;
	char* current;
	coords* e_cords;
	bool exist;
public:
	entity(char _symbol, coords& _t_cords);
	entity(char _symbol, coords* _t_cords);
	entity(entity& copy);
	entity(entity* copy);
	//set
	void setExist(bool _exist);
	//get
	char getESymbol();
	char* getECurrent();
	coords* getECords();
	bool getEExist();
};

