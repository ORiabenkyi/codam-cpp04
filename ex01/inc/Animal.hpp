
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>  

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(const std::string &type);
        virtual ~Animal();
        Animal(const Animal &other);
        Animal& operator=(const Animal &other);
        virtual void makeSound() const;
        virtual std::string getType() const;
        virtual std::string getIdea() const;
        virtual std::string getIdea(int index) const;
};

#endif