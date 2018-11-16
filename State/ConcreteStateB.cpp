#include "ConcreteStateB.h"
#include "ConcreteStateA.h"
#include "Context.h"
#include <iostream>

ConcreteStateB::ConcreteStateB() {

}


ConcreteStateB::~ConcreteStateB() {

}

State * ConcreteStateB::m_pState = NULL;
State * ConcreteStateB::Instance() {
    if (NULL == m_pState) {
        m_pState = new ConcreteStateB();
    }
    return m_pState;
}

void ConcreteStateB::handle(Context * c) {
    std::cout << "State B in progress...\n Done, change State B to State A." << std::endl;
    c->changeState(ConcreteStateB::Instance());
} 
