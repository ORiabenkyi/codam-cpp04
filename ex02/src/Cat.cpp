#include "../inc/Cat.hpp"
#include <iostream>
#include <cstdlib>

Cat::Cat() : Animal("Cat")
{
    _brain = new Brain("Cat");
    #if DEBUG
    std::cout << "Cat default constructor called" << std::endl;
    #endif
}

Cat::Cat(const std::string &type) : Animal(type)
{
    _brain = new Brain("Cat");
    #if DEBUG
    std::cout << "Cat parameterized constructor called" << std::endl;
    #endif

}

Cat::~Cat()
{
    delete _brain;
    #if DEBUG
    std::cout << "Cat destructor called" << std::endl;
    #endif
}

Cat::Cat(const Cat &other) : Animal(other)
{
    _brain = new Brain(*other._brain);
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
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

std::string Cat::getType() const
{
    return type;
}

std::string Cat::getIdea() const
{
    int randomNum = rand() % 121;
    return _brain->getIdea(randomNum);
}

std::string Cat::getIdea(int index) const
{
    return _brain->getIdea(index);
}

