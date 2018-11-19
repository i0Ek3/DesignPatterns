#include <iostream>
#include <vector>
#include "Context.h"
#include "Strategy.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"

int main()
{
    Strategy * s1 = new ConcreteStrategyA();
    Context * c = new Context();
    c->setStrategy(s1);
    c->algorithm();

    Strategy * s2 = new ConcreteStrategyA();
    c->setStrategy(s2);
    c->algorithm();

    delete s1;
    delete s2;

    return 0;
}

