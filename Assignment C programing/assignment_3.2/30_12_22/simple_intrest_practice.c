#include <stdio.h>
int main()
{
    float p, r, t, si;

    printf("enter principle amount: ");
    scanf("%f", &p);
    printf("enter rate of intrest");
    scanf("%f", &r);
    printf("enter time duration");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    printf("the simple intrest is: %.2f", si);
    return 0;
}