#include <iostream>
#include "Adaptee.h"
#include "Adapter.h"
#include "Target.h"


int main()
{
        Adaptee *adaptee = new Adaptee();
        Adapter *adapter = new Adapter(adaptee);
        Target *tar = new Target();
        tar->request();

        return 0;
}

