#include<iostream>
using namespace std;
class sample
{
    public:
    int a;
    int b;
    int c;
    sample(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
        cout<<"c="<<c<<endl;
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers:-";
    cin>>a>>b>>c;
    sample q(a,b,c);
    q.show();
}