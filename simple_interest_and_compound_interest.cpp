#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float p,t,r,si,ci;
    cout<<"Enter principle,time and rate:-";
    cin>>p>>t>>r;
    si=(p*t*r)/100;
    ci=p*pow((1+(r/100)),t);
    cout<<"Simple interest="<<si<<" Compound interest="<<ci;
}