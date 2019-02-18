#include <iostream>
#include <string>
#include <memory>
using namespace std;

class EditorMemento {
public:
    EditorMemento(const string& content) : _content(content) {}
    const string& GetContent() const { return _content; }
private:
    string _content;
};

class Editor {
    using MementoType = shared_ptr<EditorMemento>;
public:
    void Type(const string& words) { _content += "  " + words; }
    const string& GetContent() const { return _content; }
    MementoType Save() { return make_shared<EditorMemento>(_content); }
    void Restore(MementoType memento) { _content = memento->GetContent(); }
private:
    string _content;
};

int main()
{
    Editor e;
    e.Type("First.");
    e.Type("Second.");
    auto saved = e.Save();

    e.Type("Third.");
    cout << e.GetContent() << endl;
    e.Restore(saved);
    cout << e.GetContent() << endl;

}
