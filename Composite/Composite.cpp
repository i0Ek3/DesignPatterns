#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {
public:
    Employee(const string& name, const string& salary) : _name(name), _salary(salary) {}
    virtual string GetName() { return _name; }
    virtual string GetSalary() { return _salary; }
protected:
    string _salary;
    string _name;
};

class Developer : public Employee {
public:
    Developer(const string& name, const string& salary) : Employee(name, salary) {}
};

class Designer : public Employee {
public:
    Designer(const string& name, const string& salary) : Employee(name, salary) {}
};

class Organization {
public:
    void AddEmployee(const Employee& e) {
        _e.push_back(e);
    }

    string GetNetSalary() {
        string net_salary = "0";
        for (auto&& e : _e) {
            net_salary += e.GetSalary();
        }
        return net_salary;
    }
private:
    vector<Employee> _e;
};

int main()
{
    Developer lucy("Lucy Ancy", "18K");
    Designer andy("Andy Wang", "20K");

    Organization org;
    org.AddEmployee(lucy);
    org.AddEmployee(andy);

    cout << "Net Salary: " << org.GetNetSalary() << endl;
}

