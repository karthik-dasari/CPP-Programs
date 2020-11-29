#include<iostream>
#include<math.h>
using namespace std;
void power(int a, int b)
{
    cout<<a<<" to the power of "<<b<<" is "<<pow(a,b)<<endl;
}
void power(float a, int b)
{
    cout<<a<<" to the power of "<<b<<" is "<<pow(a,b);
}
int main()
{
    int q,w;
    float s;
    cout<<"Enter the power:-";
    cin>>w;
    cout<<"Enter a int number:-";
    cin>>q;
    cout<<"Enter a float number:-";
    cin>>s;
    power(q,w);
    power(s,w);
}