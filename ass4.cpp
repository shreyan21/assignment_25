#include <iostream>
using namespace std;
class LargestNumber
{

public:
    int largest(int x, int y, int z)
    {
        if (x > y)
        {
            if (x > z)
            {
                return x;
            }
            else if (x <= z)
            {
                return z;
            }
        }
        else if (x < y)
        {
            if (y > z)
            {
                return y;
            }
            else if (y <= z)
            {
                return z;
            }
        }

        if (x < z)
            return z;
        return x;
    }
};
int main()
{
    LargestNumber l;
    int x, y, z;
    cout << "Enter the numbers : ";
    cin >> x >> y >> z;
    cout << "Largest is " << l.largest(x, y, z) << endl;
    return 0;
}