#ifndef _BOOK_HPP
#define _BOOK_HPP

#include <string>
#include <iostream>

class book
{
public:
    book();
    ~book();
    book(const std::string &name_book, const std::string &name_author, int number_book);
    void set_name_book(const std::string &name_book);
    void set_name_author(const std::string &get_name_author);
    void set_number_book(int number_book);
    void add_info_book();
    void display();
    std::string get_name_book();
    std::string get_name_author();
    int get_number_book();

private:
    std::string name_book;
    std::string name_author;
    int number_book;
};

book::book() {}
book::~book() {}

book::book(const std::string &name_book, const std::string &name_author, int number_book)
{
    this->name_book = name_book;
    this->name_author = name_author;
    this->number_book = number_book;
}

void book::set_name_book(const std::string &name_book)
{
    this->name_book = name_book;
}

void book::set_name_author(const std::string &name_author)
{
    this->name_author = name_author;
}

void book::set_number_book(int number_book)
{
    this->number_book = number_book;
}

void book::add_info_book()
{
    std::string book;
    std::string author;
    int number;

    std::cin.ignore();
    std::cout << "Nhap ten cuon sach: ";
    std::getline(std::cin, book);
    set_name_book(book);
    std::cout << "Nhap ten tac gia: ";
    std::getline(std::cin, author);
    set_name_author(author);
    std::cout << "Nhap so cuon sach: ";
    std::cin >> number;
    set_number_book(number);
    std::cout << "\n";
    std::cin.ignore();
}
void book::display()
{
    std::cout << "Name book: " << get_name_book() << "\n";
    std::cout << "Name author: " << get_name_author() << "\n";
    std::cout << "Number book: " << get_number_book() << "\n";
}

std::string book::get_name_book()
{
    return this->name_book;
}

std::string book::get_name_author()
{
    return this->name_author;
}

int book::get_number_book()
{
    return this->number_book;
}

#endif