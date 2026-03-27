#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    #if DEBUG
    std::cout << "Ice default constructor called" << std::endl;
    #endif
}

Ice::~Ice()
{
    #if DEBUG
    std::cout << "Ice destructor called" << std::endl;
    #endif
}

Ice::Ice(const Ice &other) : AMateria(other)
{
    #if DEBUG
    std::cout << "Ice copy constructor called" << std::endl;
    #endif
}

Ice& Ice::operator=(const Ice &other)
{
    #if DEBUG
    std::cout << "Ice copy assignment operator called" << std::endl;
    #endif
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
