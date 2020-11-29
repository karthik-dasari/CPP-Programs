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
    sample operator +(sample a2)
    {
        sample a1;
        a1.a=a+a2.a;
        a1.b=b+a2.b;
        return a1;
    }
    sample operator -(sample);
    void display()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
};
sample sample::operator -(sample a2)
{
    sample a1;
    a1.a=a-a2.a;
    a1.b=b-a2.b;
    return a1;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:-";
    cin>>a>>b;
    sample x(a,b);
    cout<<"Enter two numbers:-";
    cin>>a>>b;
    sample y(a,b),z;
    x.display();
    y.display();
    z=x+y;
    z.display();
    z=x-y;
    z.display();
}