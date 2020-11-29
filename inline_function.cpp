#include<iostream>
using namespace std;
class sample
{
    public:
    int q;
    inline void cube(int);
};
void sample::cube(int w)
{
    cout<<"CUBE OF "<<w<<" is "<<w*w*w;
}
int main()
{
    sample a;
    int b;
    cout<<"Enter a number:";
    cin>>b;
    a.cube(b);
}