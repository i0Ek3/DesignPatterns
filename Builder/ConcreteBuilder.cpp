class ConcreteBuilder : public Builder
{
public:
        ConcreteBuilder();
        virtual ~ConcreteBuilder();

        virtual void buildPartA();
        virtual void buildPartB();
        virtual void buildPartC();
};
