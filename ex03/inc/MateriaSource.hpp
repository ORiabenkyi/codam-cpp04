#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        static const int MAX_MATERIAS = 4;
    protected:
        AMateria* _materias[MAX_MATERIAS];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &other);
        MateriaSource& operator=(const MateriaSource &other);

    public:
        virtual ~MateriaSource();
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};

#endif
