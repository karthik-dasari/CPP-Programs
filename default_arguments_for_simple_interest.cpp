#include<iostream>
using namespace std;
void cal(float p,float t=2,float r=27)
{
    cout<<"Simple interest="<<(p*t*r)/100<<endl;
}
int main()
{
    float p,t,r;
    cout<<"Enter principle,time and rate:-";
    cin>>p>>t>>r;
    cal(p,t,r);
    cout<<"Enter principle:-";
    cin>>p;
    cal(p);
}