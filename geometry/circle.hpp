#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "geometry.hpp"

class circle : public geometry
{
private:
    int r;

public:
    circle() {}
    ~circle() {}
    circle(int r) {}
    double get_perimeter();
    double get_area();
};
circle::circle(int r)
{
    this->r = r;
}
double circle::get_perimeter()
{
    return 2 * 3.14 * r;
}

double circle::get_area()
{
    return 3.14 * r * r;
}

#endif