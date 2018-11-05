#include "ConcreteCommand.h"
//#include "Receiver.h"
#include <iostream>

ConcreteCommand::ConcreteCommand(Receiver *pReceiver) {
    m_pReceiver = pReceiver;
}


ConcreteCommand::~ConcreteCommand() {

}

void ConcreteCommand::execute() {
    std::cout << "ConcreteCommand::execute" << std::endl;
    m_pReceiver->action();
}
