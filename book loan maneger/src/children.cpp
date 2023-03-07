#include "src/header/children.hpp"

children::children()
{
}

children::children(const std::string &name, int age, const std::string &add,
                   const std::vector<book> &reader_list) : person(name, age, add, reader_list)
{
}

int children::money_pay()
{
    return this->get_reader_list().size() * 5000;
}

void children::display()
{
    std::cout << "Children! \n";
    person::display();
}