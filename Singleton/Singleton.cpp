#include <iostream>

class Singleton 
{
public:
        Singleton();
        virtual ~Singleton();
        Singleton *m_Singleton;

        static Singleton * getInstance();
        void singletonOperation();

private:
        static Singleton * instance;
};

Singleton * Singleton::instance = NULL;

Singleton::Singleton() {
        // 
}

Singleton::~Singleton() {
        delete instance;
}

void Singleton::singletonOperation() {
        std::cout << "singletonOperation" << std::endl;
}

Singleton * Singleton::getInstance() {
        if (instance == NULL) {
                instance = new Singleton();
        }
        return instance;
}

int main()
{
        Singleton * single = Singleton::getInstance();
        single->singletonOperation();

        return 0;
}



