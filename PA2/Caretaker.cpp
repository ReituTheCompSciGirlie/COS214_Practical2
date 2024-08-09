#include "Caretaker.h"
#include <string>
#include <iostream>

using namespace std;

Caretaker:: ~Caretaker()
{
    for (auto memento : mementos)
    {
        delete memento;
    }
}

void Caretaker:: addMemento(Memento *memento)
{
    mementos.push_back(memento);
}

Memento* Caretaker:: getMemento(int index) const
{
    if (index < 0 || index >= mementos.size())
    {
        return nullptr;
    }
    return mementos[index];
}

int Caretaker:: getMementosCount() const
{
    return mementos.size();
}