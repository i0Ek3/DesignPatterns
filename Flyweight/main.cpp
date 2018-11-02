#include <iostream>
#include "ConcreteFlyweight.h"
#include "FlyweightFactory.h"
#include "Flyweight.h"


int main()
{
    FlyweightFactory factory;
    Flyweight * fw = factory.getFlyweight("one");
    fw->operation();

    Flyweight * fw2 = factory.getFlyweight("two");
    fw2->operation();

    Flyweight * fw3 = factory.getFlyweight("one");
    fw3->operation();


    return 0;
}

