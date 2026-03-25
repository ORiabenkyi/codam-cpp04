#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include <iostream>


int main(void)
{
    // Animal* animals = new Animal;
    Dog* hond = new Dog();
    Cat* kat = new Cat();
    std::cout << hond->getType() << " " << std::endl;
    std::cout << kat->getType() << " " << std::endl;
    hond->makeSound(); //will output the dog sound!
    kat->makeSound(); //will output the cat sound!

    delete hond;
    delete kat;

    return 0;
}

