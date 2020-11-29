#include<iostream>
using namespace std;
class sample
{
    public:
    int a,b;
    sample(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    sample operator ++()
    {
        a++;
        b++;
    }
    sample operator --();
};
sample sample::operator --()
{
    a--;
    b--;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:-";
    cin>>a>>b;
    sample A(a,b);
    A.display();
    ++A;
    A.display();
    --A;
    A.display();
}