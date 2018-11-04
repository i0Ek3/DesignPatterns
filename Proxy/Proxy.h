#pragma once

#include "Subject.h"
#include "RealSubject.h"

class Proxy : public Subject
{
public:
    Proxy();
    virtual ~Proxy();

    void request();

private:
    void afterRequest();
    void preRequest();
    RealSubject *m_pRealSubject;

};

