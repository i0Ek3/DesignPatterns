
class AbstractFactory
{
public:
        AbstractFactory();
        virtual ~AbstractFactory();
        virtual AbstractProductA * createProductA() = 0;
        virtual AbstractProductB * createProductB() = 0;
};

AbstractFactory::AbstractFactory() {
        // 
}

AbstractFactory::~AbstractFactory() {
        // 
}

