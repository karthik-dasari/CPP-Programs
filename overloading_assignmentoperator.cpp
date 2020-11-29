#include<iostream>
using namespace std;
class sample
{
    public:
    int a,b;
    sample(int a=0,int b=0)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    sample operator =(sample s1)
    {
        a=s1.a;
        b=s1.b;
    }
};
int main()
{
    int a,b;
    cout<<"Enter two numbers:-";
    cin>>a>>b;
    sample A(a,b),B;
    A.display();
    B=A;
    B.display();
}