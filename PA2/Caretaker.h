#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"
#include <vector>

class Caretaker {
private:
    std::vector<Memento*> mementos;

public:
    ~Caretaker();
    void addMemento(Memento* memento);
    Memento* getMemento(int index) const;
    int getMementosCount() const;
};

#endif
