#pragma once

#include <map>
#include <string>
#include "Flyweight.h"

class FlyweightFactory
{
public:
    FlyweightFactory();
    virtual ~FlyweightFactory();

    Flyweight* getFlyweight(std::string str);

private:
    std::map<std::string, Flyweight*> m_mpFlyweight;

};

