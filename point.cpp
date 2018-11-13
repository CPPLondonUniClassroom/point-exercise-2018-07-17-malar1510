//
// Created by Tristan Brindle on 10/07/2018.
//

#include "point.hpp"

bool operator==(const point& lhs, const point& rhs)
{
    return lhs.x == rhs.x &&
            lhs.y == rhs.y;
}

bool operator!=(const point& lhs, const point& rhs)
{
    return lhs.x != rhs.x ||
           lhs.y != rhs.y;
}

point point::operator+(const point&  rhs) const  {

    return { x + rhs.x, y + rhs.y};
}

point point::operator-(const point& rhs) const  {

    return { x - rhs.x, y - rhs.y};
}

void point::operator+= ( const point& rhs)
{
    x += rhs.x;
    y += rhs.y;
}

void point::operator-= ( const point& rhs)
{
    x += rhs.x;
    y += rhs.y;
}

std::ostream& operator<< (std::ostream& oss, const point& p)
{
    oss << '(' << p.x << ", " << p.y << ')';

    return oss;
}