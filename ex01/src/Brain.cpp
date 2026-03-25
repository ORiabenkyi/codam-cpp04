#include "../inc/Brain.hpp"
#include <iostream>
#include <sstream>
#include <string>

Brain::Brain()
{
    #if DEBUG
    std::cout << "Brain default constructor called" << std::endl;
    #endif
}

Brain::Brain(std::string idea)
{
    for (int i = 0; i < 100; ++i)
    {
        //crying because of this part
        //std::to_string() is not working.
        std::stringstream ss;
        ss << idea << " " << i << " the idea";
        _ideas[i] = ss.str();
    }
    #if DEBUG
    std::cout << "Brain parameterized constructor called" << std::endl;
    #endif
}

Brain::Brain(const Brain &other)
{
    #if DEBUG
    std::cout << "Brain copy constructor called" << std::endl;
    #endif
    for (int i = 0; i < 100; ++i)
    {
        _ideas[i] = "Plagiarized: " + other._ideas[i];
    }
}

Brain& Brain::operator=(const Brain &other)
{
    #if DEBUG
    std::cout << "Brain copy assignment operator called" << std::endl;
    #endif
    if (this != &other)
    {
        for (int i = 0; i < 100; ++i)
        {
            _ideas[i] = other._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    #if DEBUG
    std::cout << "Brain destructor called" << std::endl;
    #endif
}

std::string Brain::getIdea(int index) const
{
    if (index < 0 || index >= 100)
        return "Invalid index";
    return _ideas[index];
}
