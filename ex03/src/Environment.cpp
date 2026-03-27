#include "../inc/Environment.hpp"

Environment::Environment() : _head(NULL)
{
}

Environment::~Environment()
{
    Node* current = _head;
    while (current)
    {
        Node* next = current->next;
        delete current->materia;
        delete current;
        current = next;
    }
}

void Environment::add(AMateria* m)
{
    if (!m)
        return;
    Node* node = new Node(m);
    node->next = _head;
    _head = node;
}

void Environment::remove(AMateria* m)
{
    Node*  current = _head;
    Node*  prev    = NULL;

    while (current)
    {
        if (current->materia == m)
        {
            if (prev)
                prev->next = current->next;
            else
                _head = current->next;
            delete current;
            return;
        }
        prev    = current;
        current = current->next;
    }
}

Environment& Environment::operator=(const Environment &other)
{
    (void)other; 
    return *this;
}

Environment::Environment(const Environment &other) : _head(NULL)
{
    (void)other;
}
