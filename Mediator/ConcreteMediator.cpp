#include "Mediator.h"
#include "ConcreteMediator.h"
#include <map>
#include <string>
#include <utility>
#include <iostream>

ConcreteMediator::ConcreteMediator() {

}

ConcreteMediator::~ConcreteMediator() {

}

void ConcreteMediator::operation(int who, std::string str) {
    std::map<int, Colleague*>::const_iterator itr = m_mpColleague.find(who);
    if (itr == m_mpColleague.end()) {
        std::cout << "not found this colleague." << std::endl;
        return;
    }
    Colleague * pc = itr->second;
    pc->receivemsg(str);
}

void ConcreteMediator::regist(int who, Colleague * aColleague) {
    std::map<int, Colleague*>::const_iterator itr = m_mpColleague.find(who);
    if (itr == m_mpColleague.end()) {
        m_mpColleague.insert(std::make_pair(who, aColleague));
        aColleague->setMediator(this);
    }
}
