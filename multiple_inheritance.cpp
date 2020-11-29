#include<iostream>
using namespace std;
class sample1
{
    public:
    sample1()
    {
        cout<<"This is sample1"<<endl;
    }
};
class sample2
{
    public:
    sample2()
    {
        cout<<"This is sample2"<<endl;
    }
};
class sample3:public sample1,public sample2
{
    public:
    sample3()
    {
        cout<<"This is sample3"<<endl;
    }
};
int main()
{
    sample3 s;
}