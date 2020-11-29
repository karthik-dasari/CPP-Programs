#include<iostream>
using namespace std;
void swap_callbyvalue(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"a="<<a<<" b="<<b<<endl;
}
void swap_callbyref(int *m,int *n)
{
    int c;
    c=*m;
    *m=*n;
    *n=c;
    cout<<"a="<<*m<<" b="<<*n<<endl;;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:-";
    cin>>a>>b;
    cout<<"a="<<a<<" b="<<b<<endl;
    swap_callbyvalue(a,b);
    swap_callbyref(&a,&b);
}