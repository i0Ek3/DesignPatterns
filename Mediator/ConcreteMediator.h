#pragma once

#include "Mediator.h"
#include "ConcreteColleagueA.h"
#include "ConcreteColleagueB.h"
#include <map>

class ConcreteMediator : public Mediator
{
public:
    ConcreteMediator();
    virtual ~ConcreteMediator();

    virtual void operation(int who, std::string str);
    virtual void regist(int who, Colleague * aColleague);

private:
    std::map<int, Colleague*> m_mpColleague;

};

