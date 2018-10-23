#pragma once

#include "Implementor.h"

class ConcreteImplementorA : public Implementor
{
public:
    ConcreteImplementorA();
    virtual ~ConcreteImplementorA();

    virtual void operationImp();
};

