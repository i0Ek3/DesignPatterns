class Builder
{
public:
        Builder();
        virtual ~Builder();

        virtual void buildPartA()
        virtual void buildPartB()
        virtual void buildPartC()
        virtual Product * getResult();

protected:
        Product * m_prod; //for what?
};
