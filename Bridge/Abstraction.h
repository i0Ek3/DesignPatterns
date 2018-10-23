#pragma once

#include "Implementor.h"

class Abstraction
{
public:
        Abstraction();
        virtual ~Abstraction();

        Abstraction(Implementor* imp);
        void operation();

protected:
        Implementor* m_pImp;
};

