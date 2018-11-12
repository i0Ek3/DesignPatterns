#pragma once

#include "Subject.h"

class ConcreteSubject : public Subject {
public:
	ConcreteSubject();
	virtual ~ConcreteSubject();

	virtual int getState();
	virtual void setState(int i);

private:
	int state;
};
