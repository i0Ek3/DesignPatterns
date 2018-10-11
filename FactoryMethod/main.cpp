#include <iostream>

int main()
{
        Factory * factory = new ConcreteFactory();
        Product * product = factory->factoryMethod();
        product->doSomething();

        delete factory();
        delete product();

        return 0;
}

