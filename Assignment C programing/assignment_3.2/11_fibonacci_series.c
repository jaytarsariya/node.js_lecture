// print fibonacci series up to given number.

#include <stdio.h>
int main()
{

    int a = 0, b = 1, c, n, i;

    printf("enter the number of terms\n");
    scanf("%d", &n);
    printf("fibonacci series\n");

    for (i = 1; i <= n; i++)
    {

        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}