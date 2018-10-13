class ConcreteFactory1
{
public:
        ConcreteFactory1();
        virtual ~ConcreteFactory1();
        virtual AbstractProductA * createProductA();
        virtual AbstractProductB * createProductB();
};

ConcreteFactory1::ConcreteFactory1() {
        // 
}

ConcreteFactory1::~ConcreteFactory1() {
        // 
}
