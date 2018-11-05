#include "Invoker.h"
#include <iostream>

Invoker::Invoker(Command * pCommand) {
    m_pCommand = pCommand;
}

Invoker::~Invoker() {

}

void Invoker::call() {
    std::cout << "Invoker::call" << std::endl;
    m_pCommand->execute();
}
