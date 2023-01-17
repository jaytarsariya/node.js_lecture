// print factorial of given number.
#include <stdio.h>
int main()
{
    int no, i, fact = 1;
    printf("enter a number");
    scanf("%d", &no);

    for (i = no; i >= 1; i--)
    {
        fact = fact * i;
    }

    printf("factorial is %d", fact);

    return 0;
}