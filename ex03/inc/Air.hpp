#ifndef AIR_HPP
#define AIR_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Air : public AMateria
{
public:
    Air();
    ~Air();
    Air(const Air &other);
    Air& operator=(const Air &other);
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif