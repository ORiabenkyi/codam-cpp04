#include "../inc/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    #if DEBUG
    std::cout << "WrongCat default constructor called" << std::endl;
    #endif
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type)
{
    #if DEBUG
    std::cout << "WrongCat parameterized constructor called" << std::endl;
    #endif

}

WrongCat::~WrongCat()
{
    #if DEBUG
    std::cout << "WrongCat destructor called" << std::endl;
    #endif
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    #if DEBUG
    std::cout << "WrongCat copy constructor called" << std::endl;
    #endif
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
    #if DEBUG
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    #endif
    if (this != &other)
    {
        WrongAnimal::operator=(other);
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong meow!" << std::endl;
}