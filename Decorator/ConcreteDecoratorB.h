#pragma once

#include "Decorator.h"
#include "Component.h"


class ConcreteDecoratorB : public Decorator
{
public:
    ConcreteDecoratorB(Component* pcmp);
    virtual ~ConcreteDecoratorB();

    virtual void operation();
    void addBehavior();

};

