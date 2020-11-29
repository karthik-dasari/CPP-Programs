#include<iostream>
using namespace std;
class sample1
{
    public:
    sample1()
    {
        cout<<"contructor in sample1"<<endl;
    }
    ~sample1()
    {
        cout<<"destructor in sample1"<<endl;
    }
};
class sample2:public sample1
{
    public:
    sample2()
    {
        cout<<"contructor in sample2"<<endl;
    }
    ~sample2()
    {
        cout<<"destructor in sample2"<<endl;
    }
};
int main()
{
    sample2 s;
}