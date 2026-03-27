#include "../inc/AMateria.hpp"
#include "../inc/ICharacter.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
    #if DEBUG
    std::cout << "AMateria parameterized constructor called" << std::endl;
    #endif
}

AMateria::~AMateria()
{
    #if DEBUG
    std::cout << "AMateria destructor called" << std::endl;
    #endif
}

AMateria::AMateria(const AMateria &other) : type(other.type)
{
    #if DEBUG
    std::cout << "AMateria copy constructor called" << std::endl;
    #endif
}

AMateria& AMateria::operator=(const AMateria &other)
{
    #if DEBUG
    std::cout << "AMateria copy assignment operator called" << std::endl;
    #endif
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

std::string const & AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* uses " << type << " on " << target.getName() << " *" << std::endl;
}
