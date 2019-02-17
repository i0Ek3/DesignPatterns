#include <iostream>
#include <string>
#include <exception>
using namespace std;

// 账户实现的一些功能
class Account {
public:
    Account(float balance) : _balance(balance) {}
    virtual string GetClassName() { return "Account"; }
    void NextWay(Account* const account) { _successor = account; }
    bool PayAvailable(float amount) { return _balance >= amount; }
    void Pay(float amountToPay) {
        if (PayAvailable(amountToPay)) {
            cout << "Paid " << amountToPay << " using " << GetClassName() << endl;
        } else if (_successor) {
            cout << "Cannot pay using " << GetClassName() << ". Proceeding..." << endl;
            _successor->Pay(amountToPay);
        } else {
            throw "None available accounts!";
        }
    }
protected:
    Account* _successor = nullptr;
    float _balance;
};

// 账户的三种付款方式

class Cash : public Account {
public:
    Cash(float balance) : Account(balance) {}
    string GetClassName() override { return "Cash"; }
};

class AliPay : public Account {
public:
    AliPay(float balance) : Account(balance) {}
    string GetClassName() override { return "AliPay"; }
};

class WeChat : public Account {
public:
    WeChat(float balance) : Account(balance) {};
    string GetClassName() override { return "WeChat"; }
};

int main()
{
    Cash c(100);
    AliPay a(500);
    WeChat w(1000);

    c.NextWay(&a);
    a.NextWay(&w);

    c.Pay(488);
    c.Pay(980);

    // 这里便会产生一条对象链，Cash -> AliPay -> WeChat
}
