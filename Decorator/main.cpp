#include <iostream>
#include "Component.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"
#include "ConcreteComponent.h"


int main()
{
    ConcreteComponent * pRealProd = new ConcreteComponent();
    Component * pA = new ConcreteDecoratorA(pRealProd);
    pA->operation();

    Component * pB = new ConcreteDecoratorB(pA);
    pB->operation();

    delete pRealProd;
    delete pA;
    delete pB;

    return 0;
}

