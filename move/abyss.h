#pragma once
#include "tile.h"
class abyss :
    public tile
{
public:
    abyss(coords* _t_cords, char _symbol = '#') : tile(_symbol, _t_cords)
    {}
};

