#include "../inc/Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
    #if DEBUG
    std::cout << "Dog default constructor called" << std::endl;
    #endif
}

Dog::Dog(const std::string &type) : Animal(type)
{
    #if DEBUG
    std::cout << "Dog parameterized constructor called" << std::endl;
    #endif

}

Dog::~Dog()
{
    #if DEBUG
    std::cout << "Dog destructor called" << std::endl;
    #endif
}

Dog::Dog(const Dog &other) : Animal(other)
{
    #if DEBUG
    std::cout << "Dog copy constructor called" << std::endl;
    #endif
}

Dog& Dog::operator=(const Dog &other)
{
    #if DEBUG
    std::cout << "Dog copy assignment operator called" << std::endl;
    #endif
    if (this != &other)
    {
        Animal::operator=(other);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}