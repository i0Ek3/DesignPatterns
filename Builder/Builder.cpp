#include <iostream>
using namespace std;

class Burger {
public:
    class BurgerBuilder;
    void showFlavors() {
        cout << "The burger's size you select is: " << _size << " inch." << endl;
        cout << "And follows under flavors: " << endl;
        if (_cheese) {
            cout << " cheese";
        }
        if (_peperoni) {
            cout << " peperoni";
        }
        if (_lettuce) {
            cout << " lettuce";
        }
        if (_tomato) {
            cout << " tomato";
        }
        cout << endl;
    }

private:
    Burger(int size) : _size(size) {}
    int _size = 10;
    bool _cheese = false;
    bool _peperoni = false;
    bool _lettuce = false;
    bool _tomato = false;
};

class Burger::BurgerBuilder {
public:
    BurgerBuilder(int size) {
        _burger = new Burger(size);
    }
    BurgerBuilder& AddCheese() {
        _burger->_cheese = true;
        return *this;
    }
    BurgerBuilder& AddPeperoni() {
        _burger->_peperoni = true;
        return *this;
    }
    BurgerBuilder& AddLettuce() {
        _burger->_lettuce = true;
        return *this;
    }
    BurgerBuilder& AddTomato() {
        _burger->_tomato = true;
        return *this;
    }
    Burger* Build() {
        return _burger;
    }

private:
    Burger* _burger;
};

int main()
{
    Burger* burger = Burger::BurgerBuilder(14).AddCheese().AddPeperoni().AddLettuce().AddTomato().Build();
    burger->showFlavors();
}

