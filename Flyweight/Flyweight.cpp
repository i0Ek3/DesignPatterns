#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class KarakTea {};

class TeaMaker {
public:
    KarakTea*  Make(const string& preference) {
        if (_availableTea.find(preference) == _availableTea.end()) {
            _availableTea.insert({preference, new KarakTea()});
        }
        return _availableTea.at(preference);
    }
private:
    unordered_map<string, KarakTea*> _availableTea;
};

class TeaShop {
public:
    TeaShop(TeaMaker& tm) : _tm(tm) {}
    void TakeOrder(const string& type, int id) {
        _orders[id] = _tm.Make(type);
    }
    void Serve() {
        for (auto order : _orders) {
            cout << " Serve tea to id " << order.first << endl;
        }
    }
private:
    unordered_map<int, KarakTea*> _orders;
    TeaMaker& _tm;
};

int main()
{
    TeaMaker tm;
    TeaShop ts(tm);
    ts.TakeOrder("type 1", 1);
    ts.TakeOrder("type 2", 2);
    ts.TakeOrder("type 3", 3);
    ts.Serve();
}
