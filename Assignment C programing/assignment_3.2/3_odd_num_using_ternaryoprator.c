#include <stdio.h>
int main()
{
    int n;
    printf("enter your number: ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("%d is a even number\n", n) : printf("%d is a odd number\n", n);

    return 0;
}