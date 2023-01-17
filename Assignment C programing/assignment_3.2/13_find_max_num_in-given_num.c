#include <stdio.h>
int main()
{
    int i = 0, max = 0, n=3, nums[5];
    printf("please enter the value of n:");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        printf("enter the value of %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    max = nums[0];
    printf("you have enterd following values:");

    for (i = 0; i < n; i++)
    {
        printf("%d", nums[i]);
    }

    for (i = 1; i < n; i++)
    {
        if (max < nums[i])
        {
            max = nums[i];
        }
    }
    printf("\nmaximum value is :%d\n", max);
    return 0;
}