#include <iostream>

int main()
{
        ConcreteBuilder * builder = new ConcreteBuilder();
        Director director;
        director.setBuilder(builder);
        Product * pd = director.construct();
        pd->show();

        delete builder;
        delete pd;
        return 0;
}
