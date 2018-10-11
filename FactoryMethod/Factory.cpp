#include <cstdio>

class Factory 
{

public: 
        Factory();
        virtual ~Factory();

        virtual Product* factoryMethod();

};

Factory::Factory() {
        // 
}

Factory::~Factory() {
        // 
}

Product* Factory::factoryMethod() {
        return NULL; 
}
