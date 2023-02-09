#include "tile.h"

tile::tile(char _symbol, coords &_t_cords)
{
    this->symbol = _symbol;
    this->current = &symbol;
    this->t_cords=&_t_cords;
}

tile::tile(char _symbol, coords* _t_cords)
{
    this->symbol = _symbol;
    this->current = &symbol;
    this->t_cords = _t_cords;
}

tile::tile(tile& copy)
{
    this->symbol=copy.symbol;
    this->current=copy.current;
    this->t_cords=copy.t_cords;
}

tile::tile(tile* copy)
{
    this->symbol = copy->symbol;
    this->current = copy->current;
    this->t_cords = copy->t_cords;
}

void tile::setTContent(entity* _entity)
{
    this->t_content = nullptr;
    if (_entity != nullptr)
    {
        coords tmp1(_entity->getECords());
        coords tmp2(this->getTCords());
        if (tmp1 == tmp2)
            this->t_content = _entity;
    }
}

char tile::getTSymbol()
{
    return this->symbol;
}

char* tile::getTCurrent()
{
    this->current = &this->symbol;
    if (t_content != nullptr)
        this->current = t_content->getECurrent();
    return this->current;
}

coords* tile::getTCords()
{
    return this->t_cords;
}

entity* tile::getTContent()
{
    return this->t_content;
}

std::ostream& operator<<(std::ostream& out, tile& sample)
{
    out << sample.getTCurrent();
    return out;
}

std::ostream& operator<<(std::ostream& out, tile* sample)
{
    out << sample->getTCurrent();
    return out;
}
