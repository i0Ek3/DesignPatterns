#pragma once

#include "State.h"

class Context
{
public:
    Context();
    virtual ~Context();
    
    void request();
    void changeState(State * s);

private:
    State * m_pState;

};

