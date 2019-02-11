#include <iostream>
#include <string>
#include <cassert>

class Boss {
public:
    // 使用静态变量保持单例
    static Boss& GetInstance() {
        static Boss instance;
        return instance;
    }

    // 禁用拷贝构造和拷贝赋值
    Boss(const Boss&) = delete;
    Boss& operator=(const Boss&) = delete;
private:
    Boss() {} // 构造函数私有化
};

int main()
{
    const Boss& b1 = Boss::GetInstance();
    const Boss& b2 = Boss::GetInstance();

    assert(&b1 == &b2);
}
