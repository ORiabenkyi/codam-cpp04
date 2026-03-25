#include "../inc/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    #if DEBUG
    std::cout << "Cure default constructor called" << std::endl;
    #endif
}

Cure::~Cure()
{
    #if DEBUG
    std::cout << "Cure destructor called" << std::endl;
    #endif
}

Cure::Cure(const Cure &other) : AMateria(other)
{
    #if DEBUG
    std::cout << "Cure copy constructor called" << std::endl;
    #endif
}

Cure& Cure::operator=(const Cure &other)
{
    #if DEBUG
    std::cout << "Cure copy assignment operator called" << std::endl;
    #endif
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return *this;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
