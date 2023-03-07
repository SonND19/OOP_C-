#ifndef CAR_HPP
#define CAR_HPP
#include "vihecle.hpp"

class car : public vehicle
{
public:
    car() {}
    ~car() {}

    void add_info();
    void print_info();
    void set_number_seats(int number_seats);
    void set_engine_type(const std::string &engine_type);

    float speed_base();
    int get_number_seats();
    std::string get_engine_type();

private:
    int number_seats;
    std::string engine_type;
};

void car::add_info()
{
    int seats = 0;
    std::string engine;
    vehicle::add_info();
    std::cout << "Nhap so cho ngoi: ";
    std::cin >> seats;
    set_number_seats(seats);
    std::cin.ignore();
    std::cout << "Nhap kieu dong co: ";
    std::getline(std::cin, engine);
    set_engine_type(engine);
}

void car::print_info()
{
    vehicle::print_info();
    std::cout << "So cho ngoi: " << get_number_seats() << "\n";
    std::cout << "Kieu dong co: " << get_engine_type() << "\n";
}

void car::set_number_seats(int number_seats)
{
    this->number_seats = number_seats;
}

void car::set_engine_type(const std::string &engine_type)
{
    this->engine_type = engine_type;
}

int car::get_number_seats()
{
    return this->number_seats;
}

std::string car::get_engine_type()
{
    return this->engine_type;
}

float car::speed_base()
{
    return (get_speed_max() / 4);
}
#endif