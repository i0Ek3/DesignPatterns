#include "Proxy.h"
#include <iostream>

Proxy::Proxy() {
    m_pRealSubject = new RealSubject();
}

Proxy::~Proxy() {
    delete m_pRealSubject;
}

void Proxy::afterRequest() {
    std::cout << "Proxy::afterRequest" << std::endl;
}

void Proxy::preRequest() {
    std::cout << "Proxy::preRequest" << std::endl;
}

void Proxy::request() {
    preRequest();
    m_pRealSubject->request();
    afterRequest();
}
