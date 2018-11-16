#pragma once

#include "State.h"
#include "Context.h"

class ConcreteStateA : public State
{
public:
    virtual ~ConcreteStateA();

    static State * Instance();

    virtual void handle(Context * c);

private:
    ConcreteStateA();
    static State * m_pState;

};

