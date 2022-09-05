#include<iostream>
using namespace std;
class Circle
{
   int radius;
   public:
   float area(int radius)
   {
    this->radius=radius;
    return 3.14f*radius*radius;
   }

};
int main()
{
    Circle c;
    int radius;
    cout<<"Enter the radius : ";
    cin>>radius;
    cout<<"Area of circle is "<<c.area(radius)<<endl;
    return 0;
}