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
int main()
{
    sample2 s;
}