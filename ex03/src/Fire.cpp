#include "../inc/Fire.hpp"

Fire::Fire() : AMateria("fire")
{
    #if DEBUG
    std::cout << "Fire default constructor called" << std::endl;
    #endif
}

Fire::~Fire()
{
    #if DEBUG
    std::cout << "Fire destructor called" << std::endl;
    #endif
}

Fire::Fire(const Fire &other) : AMateria(other)
{
    #if DEBUG
    std::cout << "Fire copy constructor called" << std::endl;
    #endif
}

Fire& Fire::operator=(const Fire &other)
{
    #if DEBUG
    std::cout << "Fire copy assignment operator called" << std::endl;
    #endif
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return *this;
}

AMateria* Fire::clone() const
{
    return new Fire(*this);
}

void Fire::use(ICharacter& target)
{
    std::cout << "* shoots a fireball at " << target.getName() << " *" << std::endl;
}
