#include <iostream>
using namespace std;

class Builder {
public:
    void Build() {
        Test();
        Lint();
        Assemble();
        Deploy();
    }
protected:
    virtual void Test() = 0;
    virtual void Lint() = 0;
    virtual void Assemble() = 0;
    virtual void Deploy() = 0;
};

class AndroidBuilder : public Builder {
    void Test() override { cout << "Testing..." << endl; }
    void Lint() override { cout << "Linting..." << endl; }
    void Assemble() override { cout << "Assembling..." << endl; }
    void Deploy() override { cout << "Deploying..." << endl; }
};

class IOSBuilder : public Builder {
    void Test() override { cout << "Testing..." << endl; }
    void Lint() override { cout << "Linting..." << endl; }
    void Assemble() override { cout << "Assembling..." << endl; }
    void Deploy() override { cout << "Deploying..." << endl; }
};

int main()
{
    AndroidBuilder android;
    cout << "Build for Android:" << endl;
    android.Build();

    IOSBuilder ios;
    cout << "Build for iOS:" << endl;
    ios.Build();
}
