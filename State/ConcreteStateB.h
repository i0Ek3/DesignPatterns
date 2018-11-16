#pragma once

#include "State.h"
#include "Context.h"

class ConcreteStateB : public State
{
public:
    virtual ~ConcreteStateB();

    static State * Instance();

    virtual void handle(Context * c);

private:
    ConcreteStateB();
    static State * m_pState;
};

