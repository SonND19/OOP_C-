#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "geometry.hpp"

class rectangle : public geometry
{
private:
    int w;
    int h;

public:
    rectangle() {}
    ~rectangle() {}
    double get_perimeter();
    rectangle(int w, int h);
    double get_area();
};
double rectangle::get_perimeter()
{
    return (w + h) * 2;
}

rectangle::rectangle(int w, int h)
{
    this->w = w;
    this->h = h;
}
double rectangle::get_area()
{
    return w * h;
}
#endif