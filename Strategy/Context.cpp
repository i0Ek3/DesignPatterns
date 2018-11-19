#include "Context.h"
#include "Strategy.h"

Context::Context() {

}

Context::~Context() {

}

void Context::algorithm() {
    m_pStrategy->algorithm();
}

void Context::setStrategy(Strategy* s) {
    m_pStrategy = s;
}
