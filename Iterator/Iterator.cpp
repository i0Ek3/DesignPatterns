#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 以下实现了两个接口，在main函数中直接使用，并不知道具体的接口实现。

class RadioStation {
    friend bool operator==(const RadioStation& lhs, const RadioStation& rhs) { return lhs._freq == rhs._freq; }
public:
    RadioStation(float freq) : _freq(freq) {}
    float GetFrequency() const { return _freq; }
private:
    float _freq;
};

class StationList {
    using Iter = vector<RadioStation>::iterator;
public:
    void AddStation(const RadioStation& station) { _station.push_back(station); }
    void RemoveStation(const RadioStation& remove) {
        auto found = find(_station.begin(), _station.end(), remove);
        if (found != _station.end()) {
            _station.erase(found);
        }
    }
    Iter begin() { return _station.begin(); }
    Iter end() { return _station.end(); }
private:
    vector<RadioStation> _station;
};

int main()
{
    StationList sl;
    sl.AddStation(RadioStation(76));
    sl.AddStation(RadioStation(106.9));
    sl.AddStation(RadioStation(88));
    cout << "Add station 76, 106.9, 88: " << endl;
    for (auto&& station : sl) {
        cout << station.GetFrequency() << endl;
    }
    sl.RemoveStation(RadioStation(88));
    cout << "After remove station 88: " << endl;
    for (auto&& station : sl) {
        cout << station.GetFrequency() << endl;
    }
}
