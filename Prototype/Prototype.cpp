#include <iostream>
#include <string>
using namespace std;

class Prototype {
public:
    Prototype(const string& name, const string& category = "default")
    : _name(name), _category(category)
    {}
    void Name(const string& name) {
        _name = name;
    }
    void Show() {
        cout << _name << " : " << _category << endl;
    }
private:
    string _name;
    string _category;
};

int main()
{
    Prototype A("Prototype");
    A.Show();

    Prototype B(A);
    B.Name("Copy constructor");
    B.Show();

    Prototype C = A;
    C.Name("Copy assignment");
    C.Show();
}
