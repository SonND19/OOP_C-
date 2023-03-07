#ifndef VEHICLE_HPP
#define VEHICLE_HPP
#include <iostream>
#include <string>

class vehicle
{
public:
    vehicle();
    ~vehicle();

    virtual void add_info();
    virtual void print_info();

    void set_maker(const std::string &maker);
    void set_vehicle_name(const std::string &vehicle_name);
    void set_year_maker(int year_maker);
    void set_speed_max(float speed_max);

    std::string get_maker();
    std::string get_vehicle_name();
    int get_year_maker();
    float get_speed_max();

private:
    std::string maker;
    std::string vehicle_name;
    int year_maker;
    float speed_max;
};

vehicle::vehicle()
{
}

vehicle::~vehicle()
{
    std::cout << "Huy thanh cong.\n";
}

void vehicle::set_maker(const std::string &maker)
{
    this->maker = maker;
}

void vehicle::set_vehicle_name(const std::string &vehicle_name)
{
    this->vehicle_name = vehicle_name;
}

void vehicle::set_year_maker(int year_maker)
{
    this->year_maker = year_maker;
}

void vehicle::set_speed_max(float speed_max)
{
    this->speed_max = speed_max;
}

std::string vehicle::get_maker()
{
    return this->maker;
}

std::string vehicle::get_vehicle_name()
{
    return this->vehicle_name;
}

int vehicle::get_year_maker()
{
    return this->year_maker;
}

float vehicle::get_speed_max()
{
    return this->speed_max;
}

void vehicle::add_info()
{
    std::string makerr;
    std::string vihe_name;
    int year;
    float speeds;

    std::cout << "\nNhap thong tin hang san xuat: ";
    std::getline(std::cin, makerr);
    set_maker(makerr);

    std::cout << "Nhap ten phuong tien: ";
    std::getline(std::cin, vihe_name);
    set_vehicle_name(vihe_name);

    std::cout << "Nhap nam san xuat: ";
    std::cin >> year;
    set_year_maker(year);

    std::cout << "Nhap van toc toi da: ";
    std::cin >> speeds;
    set_speed_max(speeds);
    std::cin.ignore();
}

void vehicle::print_info()
{
    std::cout << "Hang san xuat: " << get_maker() << "\n";
    std::cout << "Ten phuong tien: " << get_vehicle_name() << "\n";
    std::cout << "Nam san xuat: " << get_year_maker() << "\n";
    std::cout << "Van toc toi da: " << get_speed_max() << "\n";
    std::cout << "\n";
}

#endif