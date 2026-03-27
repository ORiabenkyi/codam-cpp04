#include "../inc/Character.hpp"
#include "../inc/AMateria.hpp"

Character::Character() : ICharacter()
{
}

Character::Character(std::string const & name)
{
    this->name = name;
    for (int i = 0; i < INVENTORY_SIZE; ++i)
        this->inventory[i] = NULL;
}

Character::Character(const Character &other) : ICharacter(other)
{
}

Character& Character::operator=(const Character &other)
{
    if (this != &other)
        ICharacter::operator=(other);
    return *this;
}

Character::~Character()
{
    // for (int i = 0; i < INVENTORY_SIZE; ++i)
    //     delete this->inventory[i];
    #if DEBUG
    std::cout << "Character destructor called" << std::endl;
    #endif
}

std::string const & Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < INVENTORY_SIZE; ++i)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= INVENTORY_SIZE)
        return;
    this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= INVENTORY_SIZE || !this->inventory[idx])
    {
        std::cout << "No slot " << idx << std::endl;
        return;
    }
    this->inventory[idx]->use(target);
}




