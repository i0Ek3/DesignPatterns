#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Context.h"
#include <iostream>


ConcreteStateA::ConcreteStateA() {

}


ConcreteStateA::~ConcreteStateA() {
    
}

State * ConcreteStateA::m_pState = NULL;
State * ConcreteStateA::Instance() {
    if (NULL == m_pState) {
        m_pState = new ConcreteStateA();
    }
    return m_pState;
}

void ConcreteStateA::handle(Context * c) {
    std::cout << "State A in progress.....\n Done, change State A to State B." << std::endl;
    c->changeState(ConcreteStateB::Instance());
} 
