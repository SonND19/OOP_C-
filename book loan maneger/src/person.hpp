#ifndef _PERSON_HPP
#define _PERSON_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "book.hpp"

class person : public book
{
public:
    person();
    person(std::string name, int age, std::string add, std::vector<book> reader_list);

    void add_info();
    void set_name(const std::string &name);
    void set_add(const std::string &add);
    void set_age(int age);
    void set_reader_list(const std::vector<book> reader_list);
    std::string get_name();
    std::string get_add();
    int get_age();
    std::vector<book> get_reader_list();
    virtual int money_pay() = 0;
    void display();
    static void sort_person_age(std::vector<person *> &location);
    static std::vector<int> get_list_age(const std::vector<person *> &location);
    static std::vector<book> get_max_book_borrowed(const std::vector<person *> &location_person,
                                                   std::vector<book> location_book);

private:
    std::string name;
    std::string add; // address
    int age;
    std::vector<book> reader_list; // danh sach cac cuon sach muon cua tac gia
};

person::person()
{
}

person::person(std::string name, int age, std::string add, std::vector<book> reader_list)
{
    this->name = name;
    this->add = add;
    this->age = age;
    this->reader_list = reader_list;
}

void person::set_name(const std::string &name)
{
    this->name = name;
}

void person::set_add(const std::string &add)
{
    this->add = add;
}

void person::set_age(int age)
{
    this->age = age;
}

void person::set_reader_list(const std::vector<book> reader_list)
{
    this->reader_list = reader_list;
}
std::string person::get_name()
{
    return this->name;
}

std::string person::get_add()
{
    return this->add;
}

std::vector<book> person::get_reader_list()
{
    return this->reader_list;
}

int person::get_age()
{
    return this->age;
}

void person::add_info()
{
    std::string full_name;
    std::string address;
    std::vector<book> reader;
    int age_old;

    std::cout << "Nhap ho va ten: ";
    std::getline(std::cin, full_name);
    set_name(full_name);
    std::cout << "Nhap dia chi: ";
    std::getline(std::cin, address);
    set_add(address);
    std::cout << "Nhap do tuoi: ";
    std::cin >> age_old;
    set_age(age_old);
    std::cout << "Nhap danh sach muon:\n";
    book::add_info_book();
}
void person::display()
{
    std::cout << "Name: " << get_name() << "\n";
    std::cout << "Age: " << get_age() << "\n";
    std::cout << "Address: " << get_add() << "\n";
    std::cout << "Reader list: \n";
    book::display();
    // for (int i = 0; i < reader_list.size(); i++)
    // {
    //     reader_list[i].display();
    // }
    std::cout << "\n";
}

void person::sort_person_age(std::vector<person *> &location)
{
    for (int i = 0; i < location.size() - 1; i++)
    {
        for (int j = i + 1; j < location.size(); j++)
        {
            if (location[i]->get_age() > location[j]->get_age())
            {
                std::swap(location[i], location[j]);
            }
        }
    }
}

std::vector<int> person::get_list_age(const std::vector<person *> &location)
{
    std::vector<int> list_age;
    for (int i = 0; i < location.size(); i++)
    {
        if (!(std::find(list_age.begin(), list_age.end(), location[i]->get_age()) != list_age.end()))
        {
            list_age.push_back(location[i]->get_age());
        }
    }
    return list_age;
}

std::vector<book> person::get_max_book_borrowed(const std::vector<person *> &location_person,
                                                std::vector<book> location_book)
{
    std::vector<int> count(location_book.size(), 0);
    for (int i = 0; i < location_book.size(); i++)
    {
        for (int j = 0; j < location_person.size(); i++)
        {
            std::vector<book> b(location_person[j]->get_reader_list());
            for (int h = 0; h < b.size(); h++)
            {
                if (location_book[i].get_name_book() == b[h].get_name_book())
                {
                    count[i]++;
                }
            }
        }
    }

    int max = *std::max_element(count.begin(), count.end());
    std::vector<book> res;
    for (int i = 0; i < location_book.size(); i++)
    {
        if (count[i] == max)
        {
            res.push_back(location_book[i]);
        }
    }

    return res;
}

#endif