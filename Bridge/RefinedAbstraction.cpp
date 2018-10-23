#include <iostream>
#include "RefinedAbstraction.h"

RefinedAbstraction::RefinedAbstraction() {

}

RefinedAbstraction::RefinedAbstraction(Implementor* imp)
: Abstraction(imp)
{
        
}

RefinedAbstraction::~RefinedAbstraction() {

}

void RefinedAbstraction::operation() {
        std::cout << "balabala..." << std::endl;
        m_pImp->operationImp();
}
