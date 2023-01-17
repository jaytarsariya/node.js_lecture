// sum of even numbers and sum of odd numbers.

#include <stdio.h>
int main()
{
    int a[10], i, sum = 0; // sumo=0;
    printf("enter 10 numbers\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            sum = sum + a[i];

        // else
        // sumo= sumo + a[i];
    }
    printf("sum of even numbers= %d\n", sum);

    // printf("sum of odd numbers =%d\n", sumo);

    return 0;
}