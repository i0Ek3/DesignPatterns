#include <iostream>
#include "ConcreteStrategyA.h"

ConcreteStrategyA::ConcreteStrategyA() {

}


ConcreteStrategyA::~ConcreteStrategyA() {

}

void ConcreteStrategyA::algorithm() {
    std::cout << "Algorithm A" << std::endl;
}
