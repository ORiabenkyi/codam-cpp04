
#include "../inc/Animal.hpp"
#include <iostream>
#include <climits>

Animal::Animal() : type("Animal")
{
    #if DEBUG
    std::cout << "Animal default constructor called" << std::endl;
    #endif
}

Animal::Animal(const std::string &type) : type(type)
{
    #if DEBUG
    std::cout << "Animal parameterized constructor called" << std::endl;
    #endif
}

Animal::~Animal()
{
    #if DEBUG
    std::cout << "Animal destructor called" << std::endl;
    #endif
}

Animal::Animal(const Animal &other) : type(other.type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
    #if DEBUG
    std::cout << "Animal copy assignment operator called" << std::endl;
    #endif
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal makes a sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

