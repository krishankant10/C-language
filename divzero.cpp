#include<iostream>
#include<conio.h>
using namespace std;
class number
{
private:
    int num;
public:
    void read()
    {
        cin>>num;
    }
    class divide{};
    int div(number num2)
    {
        if(num2.num==0)
            throw divide();
        else
            return num/num2.num;
    }
};
int main()
{
    number num1,num2;
    int result;
    cout<<"Enter Number 1:";
    num1.read();
    cout<<"Enter Nimber 2:";
    num2.read();
    try
    {
        cout<<"trying division operation\n";
        result=num1.div(num2);
        cout<<"\n\nSucceced\n";
    }
    catch(number::divide)
    {
        cout<<"Failed"<<endl;
        cout<<"Exception: Divide By Zero:";
        return 1;
    }
    cout<<"num1/num2="<<result;
    return 0;
}
