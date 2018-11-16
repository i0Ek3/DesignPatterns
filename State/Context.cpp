#include "Context.h"
#include "ConcreteStateA.h"


Context::Context() {
    m_pState = ConcreteStateA::Instance();
}


Context::~Context() {

}

void Context::changeState(State * s) {
    m_pState = s;
}

void Context::request() {
    m_pState->handle(this);
}


