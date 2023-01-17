#include <stdio.h>
int main()
{
    float p, r, t, si; // p=principle amount
                       // r=rate intrest
                       // t=time
                       // si=variable
    printf("enter the principle amount=");
    scanf("%f", &p);

    printf("enter the rate of intrest=");
    scanf("%f", &r);

    printf("enter the time duration=");
    scanf("%f", &t);

    si = (p * r * t) / 100;
    printf("the simple intrest is %f", si);

    return 0;
}