#include <iostream>
#include "ConcreteImplementorB.h"

ConcreteImplementorB::ConcreteImplementorB() {

}


ConcreteImplementorB::~ConcreteImplementorB() {

}

void ConcreteImplementorB::operationImp() {
        std::cout << "imp in ConcreteImplementorB style." << std::endl;
}
