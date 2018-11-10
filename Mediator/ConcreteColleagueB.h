#pragma once

#include "Colleague.h"
#include "Mediator.h"
#include <string>

class ConcreteColleagueB : public Colleague
{
public:
    ConcreteColleagueB();
    virtual ~ConcreteColleagueB();

    virtual void sendmsg(int to, std::string str);
    virtual void receivemsg(std::string str);


};

