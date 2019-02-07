
#include <iostream>

class Interviewer {
public:
    virtual void interview() = 0;
};

class Developer : public Interviewer {
public:
    void interview() override {
        std::cout << "Interviewing dev skills..." << std::endl;
    }
};

class Marketor : public Interviewer {
public:
    void interview() override {
        std::cout << "Interviewing market skills..." << std::endl;
    }
};

class Manager {
public:
    void takeInterview() {
        Interviewer* Interviewer = this->makeInterviewer();
        Interviewer->interview();
    }
protected:
    virtual Interviewer* makeInterviewer() = 0;
};

template <typename Interviewer>
class SubManager : public Manager {
protected:
    Interviewer* makeInterviewer() override {
        return new Interviewer();
    }
};

int main()
{
    Manager* devManager = new SubManager<Developer>();
    devManager->takeInterview();

    Manager* marketManager = new SubManager<Marketor>();
    marketManager->takeInterview();
}
