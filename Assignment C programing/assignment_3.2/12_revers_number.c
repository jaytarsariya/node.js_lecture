// print number in revers order.

#include <stdio.h>
int main()
{
    int n, r;
    printf("enter number:\n");
    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;
        printf("%d\n", r);
        printf("___\n");

        n = n / 10;
    }
    return 0;
}

/*
input n;
n= 123

while(n>0) 123>0__condition ture

r= n%10;
          123/10
          120
          r= remender=3
          print value of r=3............
*/