#include <iostream>
#include <string>
#include <vector>
#include <functional>
using namespace std;

class JobPost {
public:
    JobPost(const string& title) : _title(title) {}
    const string& GetTitle() const { return _title; }
private:
    string _title;
};

class Observer {
public:
    virtual void JobPosted(const JobPost& job) = 0;
};

class JobSeeker : public Observer {
public:
    JobSeeker(const string& name) : _name(name) {}
    void JobPosted(const JobPost &job) override {
        cout << "Hello " << _name << "! New job postd: " << job.GetTitle() << endl;
    }
private:
    string _name;
};

class Observable {
public:
    virtual void Attach(Observer& ob) = 0;
    virtual void AddJob(const JobPost& jp) = 0;
protected:
    virtual void Notify(const JobPost& jp) = 0;
};

class JobPostings : public Observable {
public:
    void Attach(Observer& ob) override {
        _ob.push_back(ob);
    }
    void AddJob(const JobPost& jp) override {
        Notify(jp);
    }
private:
    void Notify(const JobPost& jp) override {
        for (Observer& ob : _ob) {
            ob.JobPosted(jp);
        }
    }
    vector<reference_wrapper<Observer>> _ob;
};


int main()
{
    JobSeeker a("A");
    JobSeeker b("B");

    JobPostings jp;
    jp.Attach(a);
    jp.Attach(b);

    jp.AddJob(JobPost("CEO"));
}
