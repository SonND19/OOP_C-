#ifndef _ADULT_HPP
#define _ADULT_HPP

#include "person.hpp"
// #include "book.hpp"

class adult : public person
{
public:
    adult();
    adult(const std::string &name, int age, const std::string &add, const std::vector<book> &reader_list);
    int money_pay();
    void display();

private:
};

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
    person::display();
}
#endif
