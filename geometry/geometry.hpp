#ifndef GEOMETRY_HPP
#define GEOMETRY_HPP

#include <iostream>
#include <string>

class geometry
{
public:
    geometry();
    ~geometry();

    virtual double get_perimeter() = 0;
    virtual double get_area() = 0;
    virtual void display();
};

geometry::geometry()
{
}

geometry::~geometry()
{
}

void geometry::display()
{
    std::cout << "Perimeter: " << get_perimeter() << "\n";
    std::cout << "Area: " << get_area() << "\n";
}
#endif