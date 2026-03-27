#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP

#include "AMateria.hpp"

class Environment
{
private:
    struct Node
    {
        AMateria*   materia;
        Node*       next;
        Node(AMateria* m) : materia(m), next(NULL) {}
    };

    Node* _head;

    Environment(const Environment &other);
    Environment& operator=(const Environment &other);

public:
    Environment();
    ~Environment();

    void        add(AMateria* m);
    void        remove(AMateria* m);
};

#endif
