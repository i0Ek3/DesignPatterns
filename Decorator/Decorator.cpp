#include <iostream>
#include <string>
using namespace std;

class Coffee {
public:
    virtual float GetCost() = 0;
    virtual string GetDescription() = 0;
};

class SimpleCoffee : public Coffee {
public:
    float GetCost() override { return 10; }
    string GetDescription() override { return " Simple Coffee "; }
};

class CoffeePlus : public Coffee {
public:
    CoffeePlus(Coffee& coffee) : _coffee(coffee) {}
    virtual float GetCost() = 0;
    virtual string GetDescription() = 0;
protected:
    Coffee& _coffee;
};

class MilkCoffee : public CoffeePlus {
public:
    MilkCoffee(Coffee& coffee) : CoffeePlus(coffee) {}
    float GetCost() override { return _coffee.GetCost() + 2; }
    string GetDescription() override { return _coffee.GetDescription() + ", milk"; }
};

class WhipCoffee : public CoffeePlus {
public:
    WhipCoffee(Coffee& coffee) : CoffeePlus(coffee) {}
    float GetCost() override { return _coffee.GetCost() + 5; }
    string GetDescription() override { return _coffee.GetDescription() + ", whip"; }
};

class VanillaCoffee : public CoffeePlus {
public:
    VanillaCoffee(Coffee& coffee) : CoffeePlus(coffee) {}
    float GetCost() override { return _coffee.GetCost() + 3; }
    string GetDescription() override { return _coffee.GetDescription() + ", vanilla"; }
};

int main()
{
    Coffee* someCoffee = new SimpleCoffee();
    cout << someCoffee->GetCost() << endl;
    cout << someCoffee->GetDescription() << endl;

    someCoffee = new MilkCoffee(*someCoffee);
    cout << someCoffee->GetCost() << endl;
    cout << someCoffee->GetDescription() << endl;

    someCoffee = new WhipCoffee(*someCoffee);
    cout << someCoffee->GetCost() << endl;
    cout << someCoffee->GetDescription() << endl;

    someCoffee = new VanillaCoffee(*someCoffee);
    cout << someCoffee->GetCost() << endl;
    cout << someCoffee->GetDescription() << endl;

}


