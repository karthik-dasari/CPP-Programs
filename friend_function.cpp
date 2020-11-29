#include<iostream>
using namespace std;
class sample
{
    public:
    int l,b;
    sample(int l,int b)
    {
        this->l=l;
        this->b=b;
    }
    friend void area(sample);
    friend void show();
};
void area(sample s)
{
    cout<<"Area="<<s.l*s.b;
}
int main()
{
    int l,b;
    cout<<"Enter l and b:-";
    cin>>l>>b;
    sample s(l,b);
    area(s);
}