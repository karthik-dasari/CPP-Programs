#include<iostream>
using namespace std;
int main()
{
    int fare,d;
    cout<<"Enter the distance:-";
    cin>>d;
    if(d>0&&d<=10)
    {
        fare=d*10;
        cout<<"Fare="<<fare;
    }
    else if(d>10&&d<=20)
    {
        fare=d*20;
        cout<<"Fare="<<fare;
    }
    else if(d>20&&d<=30)
    {
        fare=d*30;
        cout<<"Fare="<<fare;
    }
}