#ifndef FIRE_HPP
#define FIRE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
class Fire : public AMateria
{
public:
    Fire();
    ~Fire();
    Fire(const Fire &other);
    Fire& operator=(const Fire &other);
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif