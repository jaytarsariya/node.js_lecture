#include <stdio.h>
int main()
{
    int ch;
    printf("enter the number ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("___monday___\n");

        break;

    case 2:
        printf("tuesday");

        break;

    case 3:
        printf("wednesday");

        break;

    case 4:
        printf("thrusday");

        break;

    case 5:
        printf("friday");

        break;

    case 6:
        printf("saturday");

        break;

    case 0:
        printf("sunday");

        break;

    default:
        printf("enter number of 0 to 6");
    }
    return 0;
}