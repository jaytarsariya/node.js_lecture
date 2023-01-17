#include <stdio.h>
int main()
{
    int a, b, ch, add, sub, multi, div, rem;
    printf("1 is\taddition\n2 is\tsubtraction\n3 is\tmultiplication\n4 is\tdivision\n5 is\tremender\n");
    printf("enter your choice\n");
    scanf("%d", &ch);
    printf("enter two number\n");
    scanf("%d%d", &a, &b);

    if (ch == 1)
    {
        add = a + b;
        printf("addition: %d", add);
    }
    else if (ch == 2)
    {
        sub = a - b;
        printf("subtraction: %d", sub);
    }
    else if (ch == 3)
    {
        multi = a * b;
        printf("multiplication: %d", multi);
    }
    else if (ch == 4)
    {
        div = a / b;
        printf("division: %d", div);
    }
    else if (ch == 5)
    {
        rem = a % b;
        printf("remender: %d", rem);
    }
    else
    {
        printf("enter valid choice");
    }

    return 0;
}