#pragma once

#include <string>
#include "Flyweight.h"


class ConcreteFlyweight : public Flyweight
{
public:
    ConcreteFlyweight(std::string str);
    virtual ~ConcreteFlyweight();

    virtual void operation();

private:
    std::string intrinsicState;
};

