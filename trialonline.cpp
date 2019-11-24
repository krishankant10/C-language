   #include <iostream>
    using namespace std;
    class Base
    {
        protected:
        int a;
        public:
        Base()
        {
            a = 34;
        }
        Base(int i)
        {
            a = i;
        }
        virtual ~Base()
        {
            if (a < 0)  throw a;
        }
        virtual int getA()
        {
            if (a < 0)
            {
                throw a;
            }
        }
    };
    int main()
    {
        try
        {
            Base b(-25);  c;
            cout << endl << b.getA();
        }
        catch (int)
        {
            cout << endl << "Illegal initialization";
        }
    }
