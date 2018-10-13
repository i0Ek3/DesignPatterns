class ConcreteFactory2
{
public:
        ConcreteFactory2();
        virtual ~ConcreteFactory2();
        virtual AbstractProductB * createProductA();
        virtual AbstractProductB * createProductB();
};

ConcreteFactory2::ConcreteFactory2() {
        // 
}

ConcreteFactory2::~ConcreteFactory2() {
        // 
}
