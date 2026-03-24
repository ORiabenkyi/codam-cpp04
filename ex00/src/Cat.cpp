#include "../inc/Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
    #if DEBUG
    std::cout << "Cat default constructor called" << std::endl;
    #endif
}

Cat::Cat(const std::string &type) : Animal(type)
{
    #if DEBUG
    std::cout << "Cat parameterized constructor called" << std::endl;
    #endif

}

Cat::~Cat()
{
    #if DEBUG
    std::cout << "Cat destructor called" << std::endl;
    #endif
}

Cat::Cat(const Cat &other) : Animal(other)
{
    #if DEBUG
    std::cout << "Cat copy constructor called" << std::endl;
    #endif
}

Cat& Cat::operator=(const Cat &other)
{
    #if DEBUG
    std::cout << "Cat copy assignment operator called" << std::endl;
    #endif
    if (this != &other)
    {
        Animal::operator=(other);
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}