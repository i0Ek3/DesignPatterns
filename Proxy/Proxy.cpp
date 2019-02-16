#include <iostream>
#include <string>
using namespace std;

class Door { // 普通的门
public:
    virtual void Open() = 0;
    virtual void Close() = 0;
};

class LabDoor : public Door {
public:
    void Open() override { cout << "Open the lab door" << endl; };
    void Close() override { cout << "Close the lab door" << endl; };
};

class SecurityDoor { // 安全门实际上就是一个代理，实现了其他功能
public:
    SecurityDoor(Door& door) : _door(door) {}
    bool Authenticate(const string& pwd) { return pwd == "1r3ob"; }
    void Open(const string& pwd) {
        if (Authenticate(pwd)) {
            _door.Open();
        } else {
            cout << "Wrong password!" << endl;
        }
    }
    void Close() { _door.Close(); }
private:
    Door& _door;
};

int main()
{
    LabDoor lab;
    SecurityDoor s(lab);
    s.Open("2344"); // Wrong password
    s.Open("1r3ob"); // Open the lab door
    s.Close(); // Close the lab door
}
