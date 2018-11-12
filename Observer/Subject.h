#pragma once

#include <vector>
#include "Observer.h"

class Subject
{
public:
    Subject();
    virtual ~Subject();
    Observer *m_Observer;

    void attach(Observer * pObserver);
    void detach(Observer * pObserver);
    void notify();

    virtual int getState() = 0;
    virtual void setState(int i) = 0;

private:
    std::vector<Observer*> m_vtObj; //原本这里用的是list

};

