#include "ConcreteDecoratorA.h"
#include <iostream>


ConcreteDecoratorA::ConcreteDecoratorA(Component* pcmp)
:Decorator(pcmp)
{

}

ConcreteDecoratorA::~ConcreteDecoratorA() {

}

void ConcreteDecoratorA::addBehavior() {
    std::cout << "addBehavior A" << std::endl;
}

void ConcreteDecoratorA::operation() {
    Decorator::operation();
    addBehavior();
}

