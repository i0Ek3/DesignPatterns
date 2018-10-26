#include "ConcreteDecoratorB.h"
#include <iostream>


ConcreteDecoratorB::ConcreteDecoratorB(Component* pcmp) 
:Decorator(pcmp)
{

}


ConcreteDecoratorB::~ConcreteDecoratorB() {

}

void ConcreteDecoratorB::operation() {
    std::cout << "addBehavior B" << std::endl;
}

void ConcreteDecoratorB::addBehavior() {
    Decorator::operation();
    addBehavior();
}
