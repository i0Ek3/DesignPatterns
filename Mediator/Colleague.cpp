#include "Colleague.h"
#include "Mediator.h"
#include <iostream>
#include <string>

Colleague::Colleague() {

}

Colleague::~Colleague() {

}

void Colleague::receivemsg(std::string str) {
    std::cout << "receivemsg: " << str << std::endl;
}


void Colleague::sendmsg(int to, std::string str) {

}

void Colleague::setMediator(Mediator * aMediator) {
    m_pMediator = aMediator;
}
