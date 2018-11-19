#pragma once

#include "Strategy.h"

class Context
{
public:
    Context();
    virtual ~Context();

    void algorithm();
    void setStrategy(Strategy* s);

private:
    Strategy *m_pStrategy;

};

