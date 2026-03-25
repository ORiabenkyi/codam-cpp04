
#include "../inc/WrongAnimal.hpp"
#include <iostream>
#include <climits>

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    #if DEBUG
    std::cout << "WrongAnimal default constructor called" << std::endl;
    #endif
}

WrongAnimal::WrongAnimal(const std::string &type) : type(type)
{
    #if DEBUG
    std::cout << "WrongAnimal parameterized constructor called" << std::endl;
    #endif
}

WrongAnimal::~WrongAnimal()
{
    #if DEBUG
    std::cout << "WrongAnimal destructor called" << std::endl;
    #endif
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
    #if DEBUG
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    #endif
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    #if DEBUG
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    #endif
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes a sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}

