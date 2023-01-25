// simple calculator usinfg class.

#include <iostream>
#include <string.h>
using namespace std;
class calculator
{
public:
    int a, b, result;
    void getdata()
    {
        cout << "enter two number";
        cin >> a >> b;
    }

    void addition()

    {
        cout << "---------addition---------\n";
        result = a + b;
        cout << "\n1.additon = " << result << endl;
    }

    void subtraction()

    {
        cout << "************subtraction*************\n";
        result = a - b;
        cout << "\n2.subtraction = " << result << endl;
    }

    void multiplication()

    {
        cout << "************multiplication*************\n";
        result = a * b;
        cout << "\n3.multiplication = " << result << endl;
    }

    void division()

    {
        cout << "************division*************\n";
        result = a / b;
        cout << "\n4.division = " << result << endl;
    }

    void modulo()

    {
        cout << "************modulo*************\n";
        result = a % b;
        cout << "\n5.modulo = " << result << endl;
    }
};
int main()
{
    calculator obj;
    obj.getdata();
    obj.addition();
    obj.subtraction();
    obj.multiplication();
    obj.division();
     obj.modulo();

    return 0;
}