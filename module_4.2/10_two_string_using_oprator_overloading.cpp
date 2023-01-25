#include<iostream>
#include<string.h>
using namespace std;
class Concate
{
    char s[100];
    public:
        
        void get()
        {
            cin>>s;
        }
        
        void disp()
        {
            cout<<endl<<"string->"<<s;
        }
        
        Concate operator +(Concate s1)
        {
            
            Concate s2;
            strcpy(s2.s,s);
            strcat(s2.s,s1.s);
            return s2;
        }
};
int main()
{
    Concate s1,s2,s3;
    cout<<endl<<"Enter first string value : ";
    s1.get();
    cout<<endl<<"Enter second string value : ";
    s2.get();
    s1.disp();
    s2.disp();
    s3=s1+s2;
    cout<<endl<<"After concatenation : ";
    s3.disp();
    return 0;
}