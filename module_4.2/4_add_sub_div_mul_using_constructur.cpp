#include<iostream>
using namespace std;
class calculation
{
public:
    int a, b,c,d,e;
    calculation()     //default
    {
        cout << "enter two values";
        cin >> a >> b;
        int add = a + b;
        cout << "addition of two value" << add << endl;
    }
    calculation(int x) //single value parameterised constructor
    {
        cout<<"Enter value for subtractionn"<<endl;
        cout<<"Enter value of y: "<<endl;
        cin>>c;
        cout<<"subtraction of two value= "<<x-c<<endl;
        cout<<"------------------------------------"<<endl;
    }
    calculation(int m,int n) //double value parameterised constructor
    {
        cout<<"Enter value for multiplication"<<endl;
        cout<<"Enter value of o: "<<endl;
        cin>>d;
        cout<<"multiplication of three value= "<<m*n*d<<endl;
        cout<<"------------------------------------"<<endl;
    }
    calculation(float r,float s,float t) //tripal value parameterised constructor
    {
        cout<<"Enter value for division"<<endl;
        cout<<"Enter value of u: "<<endl;
        cin>>e;
        cout<<"division of four value= "<<r/s/t/e<<endl;
        cout<<"------------------------------------"<<endl;
    }
};
int main()
{
    
    calculation obj1,obj2(200),
    obj3(5,5),
    obj(2000,100,10);
    return 0;
}
