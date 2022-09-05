#include<iostream>
using namespace std;
class Area
{
   int length,breadth,side,radius;
   public:
   // Area for rectangle
   int area(int x,int y)
   {
    length=x;
    breadth=y;
    return x*y;
   }
   // Area for square
   int area(int x)
   {  
       side=x;
       return x*x;
     
   }
   // Area for circle
  float _area(int x)
  {
    radius=x;
    return 3.14f*radius*radius;
  }
};
int main()
{
    Area a1;
    cout<<"Area of rectangke with length as 3 and breadth as 6 is "<<a1.area(3,6)<<endl;
    cout<<"Area of square with side as 3 is "<<a1.area(3)<<endl;
    cout<<"Area of circle with radius as 2 is "<<a1._area(2)<<endl;
    return 0;
}