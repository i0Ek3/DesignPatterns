#pragma once

#include "Command.h"

class Invoker
{
public:
    Invoker(Command * pCommand);
    virtual ~Invoker();

    void call();

private:
    Command *m_pCommand;

};

