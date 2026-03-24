#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include <iostream>
#include <climits>


int main(void)
{

    {
        Cat cat1;
        Cat cat2("Kitty");
        Cat cat3(cat1);
        Cat cat4;
        cat4 = cat2;

        std::cout << "cat1 type: " << cat1.getType() << std::endl;
        std::cout << "cat2 type: " << cat2.getType() << std::endl;
        std::cout << "cat3 type: " << cat3.getType() << std::endl;
        std::cout << "cat4 type: " << cat4.getType() << std::endl;

        cat1.makeSound();
        cat2.makeSound();
        cat3.makeSound();
        cat4.makeSound();
    }

    {
        Dog dog1;
        Dog dog2("Buddy");
        Dog dog3(dog1);
        Dog dog4;
        dog4 = dog2;

        std::cout << "dog1 type: " << dog1.getType() << std::endl;
        std::cout << "dog2 type: " << dog2.getType() << std::endl;
        std::cout << "dog3 type: " << dog3.getType() << std::endl;
        std::cout << "dog4 type: " << dog4.getType() << std::endl;

        dog1.makeSound();
        dog2.makeSound();
        dog3.makeSound();
        dog4.makeSound();
    }

    return 0;
}

