#pragma once
#include "tile.h"
class grass :
    public tile
{
public:
    grass(coords* _t_cords, char _symbol = 'w') : tile(_symbol, _t_cords)
    {}
};

