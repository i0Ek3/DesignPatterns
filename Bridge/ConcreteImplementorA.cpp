#include <iostream>
#include "ConcreteImplementorA.h"

ConcreteImplementorA::ConcreteImplementorA() {

}


ConcreteImplementorA::~ConcreteImplementorA() {

}

void ConcreteImplementorA::operationImp() {
        std::cout << "imp in ConcreteImplementorA style."  << std::endl;
}
