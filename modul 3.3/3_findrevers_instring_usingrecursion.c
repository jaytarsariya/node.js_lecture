//find revers of string using recursion.

#include <stdio.h>
#include <string.h>
void reversesentance()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')

    {
        reversesentance();
        printf("%c", c);
    }
};

int main()
{
    printf("enter a sentence:");
    reversesentance();
    return 0;
}
