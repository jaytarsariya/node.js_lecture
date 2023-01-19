
// wap of addition, subtraction, multiplication and division using switch case.

#include <stdio.h>
int main()
{
    int a, b, ch, add, sub, mul, div;
    printf("enter two number");
    scanf("%d%d", &a, &b);
    table:

    printf("\n1.->\taddition\n2.->\tsubtraction\n3.->\tmultiplication\n4.->\tdivision\n");
    printf("enter your choice");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        add = a + b;
        printf("addition of two number= %d\n", add);
        printf("--------------------------------\n");
        break;

    case 2:
        sub = a - b;
        printf("subtraction of two number= %d\n", sub);
        printf("--------------------------------\n");
        break;

    case 3:
        mul = a * b;
        printf("multiplication of two number= %d\n", mul);
        printf("--------------------------------\n");
        break;

    case 4:
        div = a / b;
        printf("division of two number= %d\n", div);
        printf("--------------------------------\n");
        break;

    default:
        printf("enter valid number");
        goto table;
        break;
    }

    return 0;
}