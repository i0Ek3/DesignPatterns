#include "Mediator.h"
#include "Colleague.h"
#include "ConcreteColleagueB.h"
#include <string>
#include <iostream>

ConcreteColleagueB::ConcreteColleagueB() {

}

ConcreteColleagueB::~ConcreteColleagueB() {

}

void ConcreteColleagueB::sendmsg(int to, std::string str) {
    std::cout << "send msg from colleagueB to: " << to << std::endl;
    m_pMediator->operation(to, str);
}

void ConcreteColleagueB::receivemsg(std::string str) {
    std::cout << "ConcreteColleagueB receivemsg: " << str << std::endl;
}
