// how many odd number are there
#include <stdio.h>
int main()
{
    int i, num, rem;

    printf("enter limit:");
    scanf("%d", &num);

    printf("odd numbers of 1 to %d are: \n", num);

    for (i = 1; i <= num; i++)
    {
        rem = i % 2;
        if (rem == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}