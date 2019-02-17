#include <iostream>
using namespace std;

class Flash {
public:
    void TurnOn() { cout << "Welcome!" << endl; }
    void TurnOff() { cout << "Good Bye!" << endl; }
};

class Command {
public:
    virtual void Execute() = 0;
    virtual void Undo() = 0;
    virtual void Redo() = 0;
};

class TurnOn : public Command {
public:
    TurnOn(Flash& f) : _f(f) {}
    void Execute() override { _f.TurnOn(); }
    void Undo() override { _f.TurnOff(); }
    void Redo() override { Execute(); }
private:
    Flash& _f;
};

class TurnOff : public Command {
public:
    TurnOff(Flash& f) : _f(f) {}
    void Execute() override { _f.TurnOff(); }
    void Undo() override { _f.TurnOn(); }
    void Redo() override { Execute(); }
private:
    Flash& _f;
};

class RemoteControl {
public:
    void Submit(Command& c) {c.Execute(); }
};

int main()
{
    Flash f;
    TurnOn on(f);
    TurnOff off(f);

    RemoteControl re;
    re.Submit(on);
    re.Submit(off);
}
