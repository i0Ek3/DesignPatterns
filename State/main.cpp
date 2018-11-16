#include "Context.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include <iostream>

int main(int argc, char *argv[]) {
    char a = '0';
    if ('0' == a) {
        std::cout << "Yes!" << std::endl;
    } else {
        std::cout << "No!" << std::endl;
    }

    Context * c = new Context();
    c->request();
    c->request();
    c->request();

    delete c;
    return 0;
}

