#include<iostream>

using namespace std;
class Factorial
{
    public:
    long long fact(int x)
    {  
        int fact=1;
        for(int i=x;i>1;i--)
        {
           fact*=i;
        }
        return fact;
    }
};
int main()
{
    printf("Enter number for factorial : ");
    int x;
    cin>>x;
    Factorial f;
    cout<<"Factorial is "<<f.fact(x)<<endl;
    return 0;
}