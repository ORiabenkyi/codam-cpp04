#include "../inc/ICharacter.hpp"
#include "../inc/AMateria.hpp"
#include <iostream>



ICharacter::~ICharacter()
{
    #if DEBUG
    std::cout << "ICharacter destructor called" << std::endl;
    #endif
}

ICharacter::ICharacter()
{
    for (int i = 0; i < INVENTORY_SIZE; ++i)
    {
        inventory[i] = NULL;
    }
    #if DEBUG
    std::cout << "ICharacter default constructor called" << std::endl;
    #endif
}

ICharacter::ICharacter(const ICharacter &other)
{
    name = other.name;
    for (int i = 0; i < INVENTORY_SIZE; ++i)
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
    #if DEBUG
    std::cout << "ICharacter copy constructor called" << std::endl;
    #endif
}

ICharacter& ICharacter::operator=(const ICharacter &other)
{
    #if DEBUG
    std::cout << "ICharacter copy assignment operator called" << std::endl;
    #endif
    if (this != &other)
    {
        name = other.name;
        for (int i = 0; i < INVENTORY_SIZE; ++i)
        {
            delete inventory[i];
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return *this;
}

