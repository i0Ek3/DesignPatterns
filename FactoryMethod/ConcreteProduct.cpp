#include <iostream>

class ConcreteProduct : public Product
{

public:
        ConcreteProduct();
        virtual ~ConcreteProduct();

        virtual void doSomething();
};

ConcreteProduct::ConcreteProduct() {
        // 
}

ConcreteProduct::~ConcreteProduct() {
        // 
}

void ConcreteProduct::doSomething() {
        std::cout << "use Product A" << std::endl;
}
