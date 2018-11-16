#include <iostream>
#include "AbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"


int main()
{
        AbstractFactory * fc1 = new ConcreteFactory1();
        AbstractProductA * pa1 = fc1->createProductA();
        AbstractProductB * pb1 = fc1->createProductB();
        pa1->use();
        pb1->eat();
        
        AbstractFactory *fc2 = new ConcreteFactory2();
        AbstractProductA * pa2 = fc2->createProductA();
        AbstractProductB * pb2 = fc2->createProductB();
        pa2->use();
        pb2->eat();
        
        delete fc1;
        delete pa1;
        delete pb1;
        delete fc2;
        delete pa2;
        delete pb2;

        return 0;
}

