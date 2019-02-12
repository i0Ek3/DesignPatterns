#include <iostream>
using namespace std;

class Lion {
public:
    virtual void Roar() {
        cout << "I am Lion." << endl;
    }
};

class Dog {
public:
    void Bark() {
        cout << "I am Dog." << endl;
    }
};

class Hunter {
public:
    void Hunt(Lion& lion) {
        lion.Roar();
    }
};

// 此时的 Dog 类兼容了猎人类
class DogAdapter : public Lion {
public:
    DogAdapter(Dog& dog) : _dog(dog) {}
    void Roar() override {
        _dog.Bark();
    }
private:
    Dog& _dog;
};

int main()
{
    Dog dog;
    DogAdapter dogAdapter(dog);

    Hunter hunter;
    hunter.Hunt(dogAdapter);
}
