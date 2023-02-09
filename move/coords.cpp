#include "coords.h"

coords::coords(int _x, int _y)
{
    this->x = _x;
    this->y = _y;
}

coords::coords(coords& copy)
{
    this->x = copy.x;
    this->y = copy.y;
}

coords::coords(coords* copy)
{
    this->x = copy->x;
    this->y = copy->y;
}

void coords::setCoords(int _x, int _y)
{
    this->x = _x;
    this->y = _y;
}

int coords::getX()
{
    return this->x;
}

int coords::getY()
{
    return this->y;
}

bool operator==(coords& r, coords& l)
{
    if ((r.getX() == l.getX()) && (r.getY() == l.getY()))
        return true;
    else
        return false;
}

bool operator!=(coords& r, coords& l)
{
    if ((r.getX() != l.getX()) || (r.getY() != l.getY()))
        return true;
    else
        return false;
}

std::ostream& operator<<(std::ostream& out, coords& sample)
{
    out << "x:" << sample.getX() << ",y:" << sample.getY();
    return out;
}

std::ostream& operator<<(std::ostream& out, coords* sample)
{
    out << "x:" << sample->getX() << ",y:" << sample->getY();
    return out;
}