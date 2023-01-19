//write a program find factorial using recursion.


#include <stdio.h>

long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return(n * factorial(n - 1));
}


int main()
{
    int number;
    long fact;
    printf("enter a number:");
    scanf("%d", &number);

    fact = factorial(number);
    printf("factorial of %d is %d\n", number, fact);

    return 0;
}
