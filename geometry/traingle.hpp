#ifndef TRAINGLE_HPP
#define TRAINGLE_HPP

#include "geometry.hpp"
#include <cmath>

class traingle : public geometry
{
public:
    traingle();
    ~traingle();
    traingle(int a, int b, int c);

    double get_perimeter();
    double get_area();

private:
    int a;
    int b;
    int c;
};

traingle::traingle()
{
    std::cout << "Khoi tao thanh cong\n";
}

traingle::~traingle()
{
    std::cout << "Huy thanh cong\n";
}

traingle::traingle(int a, int b, int c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

double traingle::get_perimeter()
{
    return (this->a + this->b + this->c);
}

double traingle::get_area()
{
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

#endif