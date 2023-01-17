// writ a program to check given year is leap year or not .

#include <stdio.h>
int main()
{
    int year;
    printf("enter a year:");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("%d is a leap year", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a leap year", year);
    }
    else if (year % 100 != 0)
    {
        printf("%d is not leap year", year);
    }
    else
    {
        printf("you are enter wrong value");
    }
    return 0;
}