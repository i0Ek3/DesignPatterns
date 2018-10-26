#pragma once

#include "Component.h"

class Decorator : public Component 
{
public:
    Decorator(Component* pcmp);
    virtual ~Decorator();

    void operation();

private:
    Component * m_pComponent;
};

