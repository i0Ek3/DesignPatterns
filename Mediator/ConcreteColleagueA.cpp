#include "Colleague.h"
#include "ConcreteColleagueA.h"
#include "Mediator.h"
#include <string>
#include <iostream>

ConcreteColleagueA::ConcreteColleagueA() {

}


ConcreteColleagueA::~ConcreteColleagueA() {

}

void ConcreteColleagueA::sendmsg(int to, std::string str) {
    std::cout << "send msg form colleagueA to: " << to << std::endl; 
    m_pMediator->operation(to, str);
}

void ConcreteColleagueA::receivemsg(std::string str) {
    std::cout << "ConcreteColleagueA receivemsg: " << str << std::endl;

}
