#include <iostream>
using namespace std;

class AnimalOperation;

class Animal {
public:
    virtual void Accept(AnimalOperation& op) = 0;
};

class Monkey;
class Lion;
class Dolphin;

class AnimalOperation {
public:
    virtual void visitMonkey(Monkey& m) = 0;
    virtual void visitLion(Lion& l) = 0;
    virtual void visitDolphin(Dolphin& d) = 0;
};

class Monkey : public Animal {
public:
    void Shout() { cout << "Mokey's shout~" << endl; }
    void Accept(AnimalOperation& op) override { op.visitMonkey(*this); }
};

class Lion : public Animal {
public:
    void Shout() { cout << "Lion's shout~" << endl; }
    void Accept(AnimalOperation& op) override { op.visitLion(*this); }
};

class Dolphin : public Animal {
public:
    void Shout() { cout << "Dolphin's shout~" << endl; }
    void Accept(AnimalOperation& op) override { op.visitDolphin(*this); }
};

class Bark : public AnimalOperation {
public:
    void visitMonkey(Monkey& m) override { m.Shout(); };
    void visitLion(Lion& l) override { l.Shout(); };
    void visitDolphin(Dolphin& d) override { d.Shout(); };
};

int main()
{
    Monkey m;
    Lion l;
    Dolphin d;

    Bark b;
    m.Accept(b);
    l.Accept(b);
    d.Accept(b);
}





