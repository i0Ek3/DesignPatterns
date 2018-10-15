class Director
{
public:
        Director();
        virtual ~Director();

        Builder *m_Builder; // 
        Product * construct();
        void setBuilder(Builder* builder);

private:
        Builder * m_pbuilder;
};
