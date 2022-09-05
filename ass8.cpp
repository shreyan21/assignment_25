#include<iostream>
using namespace std;
class Rectangle
{   
  int length,breadth;
   public:
   int area(int length,int breadth)
   {  
    this->length=length;
    this->breadth=breadth;
      return length*breadth;
   }
};
int main()
{
    Rectangle r;
    int a,b;
    cout<<"Enter the length and breadth : ";
    cin>>a>>b;
    cout<<"Area is : "<<r.area(a,b)<<endl;
    return 0;
}