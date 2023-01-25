


#include<iostream>
using namespace std;
class line
{
    public:
    inline float mul(float a, float b)
    {
        return (a * b);
    }

    inline float cube(float a)
    {
        return (a * a * a);
    }
};
int main()
{
    line obj;
    float val1, val2;
    cout << "\nenter 1st value:";
    cin >> val1;
    cout << "\nenter 2st value:";
    cin >> val2;
    cout << "\nmultiplication value is:"<<obj.mul(val1,val2);
    cout << "\ncube value of["<<obj.cube(val1)<<"] is ::["<<obj.cube(val2)<<"]\n";
    return 0;
}