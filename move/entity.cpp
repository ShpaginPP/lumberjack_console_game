#include "entity.h"

entity::entity(char _symbol, coords& _t_cords)
{
    this->symbol = _symbol;
    this->current = &symbol;
    this->e_cords = &_t_cords;
    this->exist = true;
}

entity::entity(char _symbol, coords* _t_cords)
{
    this->symbol = _symbol;
    this->current = &symbol;
    this->e_cords = _t_cords;
    this->exist = true;
}

entity::entity(entity& copy)
{
    this->symbol = copy.symbol;
    this->current = copy.current;
    this->e_cords = copy.e_cords;
    this->exist = copy.exist;
}

entity::entity(entity* copy)
{
    this->symbol = copy->symbol;
    this->current = copy->current;
    this->e_cords = copy->e_cords;
    this->exist = copy->exist;
}

void entity::setExist(bool _exist)
{
    this->exist = _exist;
}

char entity::getESymbol()
{
    return this->symbol;
}

char* entity::getECurrent()
{
    return this->current;
}

coords* entity::getECords()
{
    return this->e_cords;
}

bool entity::getEExist()
{
    return this->exist;
}
