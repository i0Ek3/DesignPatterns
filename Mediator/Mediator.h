#pragma once

#include <string>

class Colleague;

class Mediator
{
public:
    Mediator();
    virtual ~Mediator();

    virtual void operation(int who, std::string str);
    virtual void regist(int who, Colleague * aColleague);

};

