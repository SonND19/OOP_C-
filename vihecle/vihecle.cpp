#include "vihecle.hpp"

vehicle::vehicle()
{
}

vehicle::~vehicle()
{
    std::cout << "Huy thanh cong.\n";
}

void vehicle::add_info()
{
    std::string makerr;
    std::string vihe_name;
    int year;
    float speeds;

    std::cout << "Nhap thong tin hang san xuat: ";
    std::getline(std::cin, makerr);
    set_maker(makerr);

    std::cout << "Nhap ten phuong tien: ";
    std::getline(std::cin, vihe_name);
    set_vihecle_name(vihe_name);

    std::cout << "Nhap nam san xuat: ";
    std::cin >> year;
    set_year_maker(year);

    std::cout << "Nhap van toc toi da: ";
    std::cin >> speeds;
    set_speed(speeds);
}

void vehicle::print_info()
{
    std::cout << "Hang san xuat: " << get_maker() << "\n";
    std::cout << "Ten phuong tien: " << get_vehicle_name() << "\n";
    std::cout << "Nam san xuat: " << get_year_maker() << "\n";
    std::cout << "Van toc toi da: " << get_speed() << "\n";
}
void vehicle::set_maker(std::string maker)
{
    this->maker = maker;
}

void vehicle::set_vihecle_name(std::string vehicle_name)
{
    this->vihecle_name = vehicle_name;
}

void vehicle::set_year_maker(int year_maker)
{
    this->year_maker = year_maker;
}

void vehicle::set_speed(float speed)
{
    this->speed = speed;
}

std::string vehicle::get_maker()
{
    return this->maker;
}

std::string vehicle::get_vehicle_name()
{
    return this->vihecle_name;
}

int vehicle::get_year_maker()
{
    return this->year_maker;
}

float vehicle::get_speed()
{
    return this->speed;
}
