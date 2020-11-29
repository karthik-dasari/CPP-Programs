#include <iostream>
 using namespace std;
class Shape  
{
    public:
    virtual int getArea() = 0;
    int width;
    int height;
};
class Rectangle: public Shape 
{
    public:
    Rectangle(int a,int b)
    {
        width=a;
        height=b;
    }
    int getArea() 
    { 
        return (width * height); 
    }
};
class Triangle: public Shape 
{
    public:
    Triangle(int a,int b)
    {
        width=a;
        height=b;
    }
    int getArea() 
    { 
        return (width * height)/2; 
    }
};
int main(void) {
   Rectangle Rect(5,6);
   Triangle  Tri(7,8);
   cout << "Total Rectangle area: " << Rect.getArea() << endl;
   cout << "Total Triangle area: " << Tri.getArea() << endl;
}
