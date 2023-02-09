#pragma once
#include <iostream>

class coords
{
	int x,y;
public:
	coords(int _x, int _y);
	coords(coords& copy);
	coords(coords* copy);
	//set
	void setCoords(int _x=0, int _y=0);
	//get
	int getX();
	int getY();
	//ops
	friend bool operator==(coords& r, coords& l);
	friend bool operator!=(coords& r, coords& l);
};

bool operator==(coords& r, coords& l);
bool operator!=(coords& r, coords& l);

std::ostream& operator<<(std::ostream& out, coords& sample);
std::ostream& operator<<(std::ostream& out, coords* sample);