#include "Observer.h"
#include "ConcreteObserver.h"
#include "Subject.h"
#include <iostream>
#include <vector>


ConcreteObserver::ConcreteObserver(std::string name) {
	m_objName = name;
}

ConcreteObserver::~ConcreteObserver() {

}

void ConcreteObserver::update(Subject * sub) {
	observerState = sub->getState();
	std::cout << "update observer[" << m_objName << "] state:" << observerState <<  std::endl;
}
