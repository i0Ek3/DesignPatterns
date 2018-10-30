
#pragma once

#include "SystemA.h"
#include "SystemB.h"
#include "SystemC.h"

class Facade
{
public:
        Facade();
        virtual ~Facade();

        void wrapOperation();

private:
        SystemC *m_SystemC;
        SystemA *m_SystemA;
        SystemB *m_SystemB;

};

