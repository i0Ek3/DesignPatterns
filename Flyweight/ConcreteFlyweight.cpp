#include <iostream>
#include <string>
#include "ConcreteFlyweight.h"

ConcreteFlyweight::ConcreteFlyweight(std::string str) {
    intrinsicState = str;
}

ConcreteFlyweight::~ConcreteFlyweight() {

}

void ConcreteFlyweight::operation() {
    std::cout << "Flyweight[" << intrinsicState << "] do operation" << std::endl;
}
