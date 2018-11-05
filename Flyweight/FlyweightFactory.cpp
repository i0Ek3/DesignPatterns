#include <iostream>
#include <string>
#include <iterator>
#include <utility>
#include "FlyweightFactory.h"
#include "ConcreteFlyweight.h"


Flyweight::Flyweight() {

}

Flyweight::~Flyweight() {

}

Flyweight* FlyweightFactory::getFlyweight(std::string str) {
    std::map<std::string, Flyweight*>::iterator it = m_mpFlyweight.find(str);
    if (it == m_mpFlyweight.end()) {
        Flyweight * fw = new ConcreteFlyweight(str);
        m_mpFlyweight.insert(std::make_pair(str, fw));
        return fw;
    } else {
        std::cout << "Already in the pool, use the exist one: "<< std::endl;
        return it->second;
    }
}


