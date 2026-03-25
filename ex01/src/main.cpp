#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include <iostream>


int main(void)
{
    const int numAnimals = 4;


	    Animal** animals = new Animal*[numAnimals];
        if (!animals) {
            std::cerr << "Failed to allocate memory for animals array" << std::endl;
            return 1;
        }
        std::cout << "Creating animals..." << std::endl;
        for (int i = 0; i < numAnimals ; i++) {
            if (i % 2 == 0) {
                animals[i] = new Dog();
            }
            else {
                animals[i] = new Cat();
            }
        }
        std::cout << "Showing ideas..." << std::endl;
        for (int i = 0; i < numAnimals; i++)
        {
            if (animals[i])
            {
                std::cout << "Animal " << i << ": " << animals[i]->getIdea() << std::endl;
            }
        }
        std::cout << "Deleting animals..." << std::endl;
        for (int i = 0; i < numAnimals; i++) {
            delete animals[i];
        }
        delete[] animals;
    
    {
        std::cout << "Testing deep copy..." << std::endl;
        Dog originalDog;
        Cat originalCat;

        Dog copiedDog = originalDog; // Copy constructor
        Cat copiedCat = originalCat; // Copy constructor

        std::cout << "Original Dog's idea: " << originalDog.getIdea(1) << std::endl;
        std::cout << "Copied Dog's idea: " << copiedDog.getIdea(1) << std::endl;

        std::cout << "Original Cat's idea: " << originalCat.getIdea(1) << std::endl;
        std::cout << "Copied Cat's idea: " << copiedCat.getIdea(1) << std::endl;

    }


    return 0;
}

