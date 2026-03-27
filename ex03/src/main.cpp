#include "../inc/AMateria.hpp"
#include "../inc/Character.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Fire.hpp"
#include "../inc/Air.hpp"
#include "../inc/MateriaSource.hpp"
#include "../inc/Environment.hpp"


int main()
{
    {
        std::cout << "----- TESTING SUBJECT -----" << std::endl;
        Environment     env;
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;

        tmp = src->createMateria("ice");
        env.add(tmp);
        me->equip(tmp);

        tmp = src->createMateria("cure");
        env.add(tmp);
        me->equip(tmp);

        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);

        // demonstrate env holding an unequipped materia
        AMateria* loose = src->createMateria("ice");
        env.add(loose);

        delete bob;
        delete me;
        delete src;
    }   // env destructor deletes 'loose' here

    {
        std::cout << "----- TESTING 2 -----" << std::endl;
        Environment     env;
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Fire());
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        //wrong way
        //src->learnMateria(new Air());
        Air *newAir = new Air();
        src->learnMateria(newAir);
        ICharacter* me = new Character("me");
        AMateria* tmp;

        tmp = src->createMateria("ice");
        env.add(tmp);
        me->equip(tmp);

        tmp = src->createMateria("cure");
        env.add(tmp);
        me->equip(tmp);

        tmp = src->createMateria("fire");
        env.add(tmp);
        me->equip(tmp);

        tmp = src->createMateria("air");
        env.add(tmp);
        me->equip(tmp);

        //second wrong way
        tmp = src->createMateria("air");
        //we must add it to env first or clear memory self
        me->equip(tmp);
        //but as no air material no leaks ;)))

        tmp = src->createMateria("fire");
        env.add(tmp);
        me->equip(tmp);

        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        me->use(2, *bob);
        me->use(3, *bob);
        me->use(4, *bob);

        // demonstrate env holding an unequipped materia
        AMateria* loose = src->createMateria("ice");
        env.add(loose);

        delete bob;
        delete me;
        delete src;
        delete newAir;
    }   // env destructor deletes 'loose' here


    return 0;
}
