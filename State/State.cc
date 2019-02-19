
#include <iostream>
#include <string>
#include <algorithm>
#include <memory>
using namespace std;

class WritingState {
public:
    virtual void Write(string words) = 0;
};

class UpperCase : public WritingState {
    void Write(string words) override {
        transform(words.begin(), words.end(), words.begin(), ::toupper);
        cout << words << endl;
    }
};

class LowerCase : public WritingState {
    void Write(string words) override {
        transform(words.begin(), words.end(), words.begin(), ::tolower);
        cout << words << endl;
    }
};

class Default : public WritingState {
    void Write(string words) override { cout << words << endl; }
};

class TextEditor {
public:
    TextEditor(const shared_ptr<WritingState>& s) : _s(s) {}
    void SetState(const shared_ptr<WritingState>& s) { _s = s; }
    void Type(string words) { _s->Write(words); }
private:
    shared_ptr<WritingState> _s;
};

int main()
{
    TextEditor t(make_shared<Default>());
    t.Type("First");
    t.SetState(make_shared<UpperCase>());
    t.Type("Second");
    t.Type("Third");
    t.SetState(make_shared<LowerCase>());
    t.Type("Fourth");
    t.Type("Fifth");
}

