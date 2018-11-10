#include <iostream>
#include "ConcreteMediator.h"
#include "ConcreteColleagueA.h"
#include "ConcreteColleagueB.h"

int main()
{
    ConcreteColleagueA * pa = new ConcreteColleagueA();
    ConcreteColleagueB * pb = new ConcreteColleagueB();
    ConcreteMediator * pm = new ConcreteMediator();
    pm->regist(1, pa);
    pm->regist(2, pb);

    pa->sendmsg(2, "Hello, I am a.");
    pb->sendmsg(1, "Hello, I am b.");

    delete pa, pb, pm;

    return 0;
}

