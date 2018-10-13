#include <iostream>

int main()
{
        AbstractFactory * fc1 = new ConcreteFactory1();
        AbstractProductA * pa1 = fc->createProductA();
        AbstractProductB * pb1 = fc->createProductB();
        pa1->use();
        pa1->eat();
        
        AbstractFactory * fc2 = new ConcreteFactory2();
        AbstractProductA * pa2 = fc->createProductA();
        AbstractProductB * pb2 = fc->createProductB();
        pa2->use();
        pa2->eat();
        
        delete fc1;
        delete pa1;
        delete pb1;
        delete fc2;
        delete pa2;
        delete pb2;

        return 0;
}

