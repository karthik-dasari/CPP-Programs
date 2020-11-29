#include<iostream>
using namespace std;
class x
{
    public:
    static int a;
};
int x::a=78;
int main()
{
    int *p;
    int n,i;
    cout<<"Enter number of values:";
    cin>>n;
    p=new int[n];
    cout<<"Enter the values:";
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }
    cout<<x::a<<endl;
    delete p;
}