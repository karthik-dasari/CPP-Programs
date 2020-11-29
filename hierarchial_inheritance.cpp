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
class sample2:public sample1
{
    public:
    sample2()
    {
        cout<<"This is sample2"<<endl;
    }
};
class sample3:public sample1
{
    public:
    sample3()
    {
        cout<<"This is sample3"<<endl;
    }
};
int main()
{
    sample2 s1;
    sample3 s2;
}