
#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
    private:
        Brain* _brain;

    public:
        Cat();
        Cat(const std::string &type);
        ~Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat &other);
        void makeSound() const;
        std::string getType() const;
        std::string getIdea() const;
        std::string getIdea(int index) const;
};

#endif