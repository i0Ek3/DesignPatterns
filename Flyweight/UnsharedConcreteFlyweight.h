#pragma once

#include "Flyweight.h"

class UnsharedConcreteFlyweight : public Flyweight
{
public:
    UnsharedConcreteFlyweight();
    virtual ~UnsharedConcreteFlyweight();

    void operation();

private:
    int allState;

};

