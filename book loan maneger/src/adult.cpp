#include "src/header/adult.hpp"

adult::adult()
{
}

adult::adult(const std::string &name, int age,
             const std::string &add, const std::vector<book> &reader_list)
    : person(name, age, add, reader_list)
{
}

int adult::money_pay()
{
    return this->get_reader_list().size() * 10000;
}

void adult::display()
{
    std::cout << "Adult!\n";
    person::display;
}