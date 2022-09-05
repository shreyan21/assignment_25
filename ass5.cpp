#include<iostream>
#include<math.h>
using namespace std;
class ReverseNumber
{  
    private:
   int digits(int x)
   {
    int count=0;
    while(x)
    {
        x/=10;
        count++;
    }
    return count;
   }
   public:
   int reverse(int x)
   {
       int k=digits(x)-1;
       int sum=0;
       while(x)
       {
       sum+=x%10*(int)pow(10,k);
       x/=10;
       k--;
       }
       return sum;

   }
};
int main()
{
    ReverseNumber r;
    
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<"Reversed number is "<<r.reverse(x)<<endl;
    return 0;
}