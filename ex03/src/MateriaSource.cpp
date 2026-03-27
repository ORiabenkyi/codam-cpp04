#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src) : IMateriaSource(src)
{
    for (int i = 0; i < 4; i++)
        this->_materias[i] = NULL;
    *this = src;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_materias[i])
                delete this->_materias[i];
            if (src._materias[i])
                this->_materias[i] = src._materias[i]->clone();
            else
                this->_materias[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < MAX_MATERIAS; i++)
    {
        if (this->_materias[i])
            delete this->_materias[i];
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!this->_materias[i])
        {
            this->_materias[i] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] && this->_materias[i]->getType() == type)
            return this->_materias[i]->clone();
    }
    return NULL;
}

