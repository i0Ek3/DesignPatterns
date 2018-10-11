
class ConcreteFactory : public Factory
{

public:
        ConcreteFactory();
        virtual ~ConcreteFactory();

        virtual Product* factoryMethod();

};

ConcreteFactory::ConcreteFactory() {
        // 
}

ConcreteFactory::~ConcreteFactory() {
        // 
}

Product* ConcreteFactory::doSomething() {
        return new ConcreteProduct();
}

