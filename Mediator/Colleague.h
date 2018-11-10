#pragma once

#include "Mediator.h"
#include <string>

class Colleague
{
public:
    Colleague();
    virtual ~Colleague();

    virtual void receivemsg(std::string str);
    virtual void sendmsg(int to, std::string str);
    void setMediator(Mediator * aMediator);

protected:
    Mediator * m_pMediator;
};

