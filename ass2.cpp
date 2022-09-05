#include<iostream>
using namespace std;
class Time
{
    int hour,minute,second;
    public:
    void set_Time(int h,int m,int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    void print()
    {
        cout<<hour<<"hr "<<minute<<"min "<<second<<"sec\n";
    }
};
int main()
{   
    Time t;
    cout<<"Enter hours , minutes and seconds : ";
    int x,y,z;
    cin>>x>>y>>z;
    t.set_Time(x,y,z);
    t.print(); 
    return 0;
}
