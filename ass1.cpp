#include<iostream>
using namespace std;
class Complex
{
    int real,imaginary;
    public:
    void setReal(int real)
    {
        this->real=real;
    }
    void setImg(int imaginary)
    {
        this->imaginary=imaginary;
    }
    void print()
    {
        cout<<real<<"+"<<imaginary<<"i\n";
    }
};
int main()
{
    Complex c1;
    c1.setReal(34);
    c1.setImg(50);
    c1.print();
    return 0;
}