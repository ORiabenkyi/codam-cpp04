#include "../inc/Air.hpp"

Air::Air() : AMateria("air")
{
    #if DEBUG
    std::cout << "Air default constructor called" << std::endl;
    #endif
}

Air::~Air()
{
    #if DEBUG
    std::cout << "Air destructor called" << std::endl;
    #endif
}

Air::Air(const Air &other) : AMateria(other)
{
    #if DEBUG
    std::cout << "Air copy constructor called" << std::endl;
    #endif
}

Air& Air::operator=(const Air &other)
{
    #if DEBUG
    std::cout << "Air copy assignment operator called" << std::endl;
    #endif
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return *this;
}

AMateria* Air::clone() const
{
    return new Air(*this);
}

void Air::use(ICharacter& target)
{
    std::cout << "* blows air at " << target.getName() << " *" << std::endl;
}

