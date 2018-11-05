#include <iostream>
#include "ConcreteCommand.h"
#include "Invoker.h"
#include "Receiver.h"

int main()
{
    Receiver * pReceiver = new Receiver();
    ConcreteCommand * pCommand = new ConcreteCommand(pReceiver);
    Invoker * pInvoker = new Invoker(pCommand);
    pInvoker->call();

    delete pReceiver;
    delete pCommand;
    delete pInvoker;
    
    return 0;
}

