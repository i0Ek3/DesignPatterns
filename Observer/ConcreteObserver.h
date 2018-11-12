#pragma once

#include "Observer.h"
#include "Subject.h"
#include <string>

class ConcreteObserver : public Observer { 
public:
	ConcreteObserver(std::string name);
	virtual ~ConcreteObserver();

	virtual void update(Subject * sub);
	
private:
	int observerState;
	std::string m_objName;
};

