#include <iostream>

class Computer { // 子系统的实现
public:
    void GetElectric() {}
    void GetSound() {}
    void GetShow() {}
    void GetOff() {}
    void GetSleep() {}
};

class ComputerFacade { // 外观模式封装了子系统的各种接口，方便使用而不需要知道他们是怎么实现的
public:
    ComputerFacade(Computer& c) : _c(c) {}
    void TurnOn() {
        _c.GetElectric();
        _c.GetSound();
        _c.GetShow();
    }
    void TurnOff() {
        _c.GetOff();
        _c.GetSleep();
    }

private:
    Computer& _c;
};

int main()
{
    Computer com;
    ComputerFacade c(com);
    c.TurnOn();
    c.TurnOff();
}
