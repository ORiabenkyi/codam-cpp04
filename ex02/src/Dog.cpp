#include "../inc/Dog.hpp"
#include <iostream>
#include <cstdlib>

Dog::Dog() : Animal("Dog")
{
    _brain = new Brain("Dog");
    #if DEBUG
    std::cout << "Dog default constructor called" << std::endl;
    #endif
}

Dog::Dog(const std::string &type) : Animal(type)
{
    _brain = new Brain("Dog");
    #if DEBUG
    std::cout << "Dog parameterized constructor called" << std::endl;
    #endif

}

Dog::~Dog()
{
    delete _brain;
    #if DEBUG
    std::cout << "Dog destructor called" << std::endl;
    #endif
}

Dog::Dog(const Dog &other) : Animal(other)
{
    _brain = new Brain(*other._brain);
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
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

std::string Dog::getType() const
{
    return type;
}

std::string Dog::getIdea() const
{
    int randomNum = rand() % 121;
    return _brain->getIdea(randomNum);
}

std::string Dog::getIdea(int index) const
{
    return _brain->getIdea(index);
}

