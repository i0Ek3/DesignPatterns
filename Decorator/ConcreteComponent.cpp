#include "ConcreteComponent.h"
#include <iostream>

ConcreteComponent::ConcreteComponent() {

}


ConcreteComponent::~ConcreteComponent() {

}

void ConcreteComponent::operation() {
    std::cout << "ConcreteComponent's normal operation!" << std::endl;
}
