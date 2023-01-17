#include <stdio.h>
int main()
{
    float x, y;
    char ch; //( +  -  *  / )
    printf("enter first number\n");
    scanf("%f", &x);
    printf("enter second number\n");
    scanf("%f", &y);

    printf("enter\n + for additon\n - for subtraction\n * for multiplication\n / for division\n");
    scanf("\n%c", &ch);

    switch (ch)
    {
    case '+':

        printf("addition=%f", (x + y));
        break;

    case '-':
        printf("subtraction=%f", (x - y));
        break;

    case '*':
        printf("multyplication=%f", (x * y));
        break;

    case '/':
        printf("division=%f", (x / y));
        break;

    default:
        printf("pleas choose correct option to perform opration");
        break;
    }

    return 0;
}