#include <stdio.h>
int main()
{
    int a[5], i, j, temp;
    printf("enter array elements:");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; i < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("array elements:");

    for (i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}