// pattern no 1
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
/*#include <stdio.h>
int main()
{
   int i, j, count =1;
   for (i = 1; i <= 5; i++)
   {
       for (j = 1; j <= i; j++)
       {
           printf("%d ", count);
           ++count;
       }
       printf("\n");
   }

   return 0;
}
*/

// pattern no 2
/*
A
B C
D E F..
*/

/*
#include <stdio.h>
int main()
{
    int i, j;
    char count='A';
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", count);
            ++count;
        }
        printf("\n");
    }

    return 0;
}
*/

// pattern no 3
/*
A
B A
C B A
D C B A
*/
/*
#include <stdio.h>
int main()
{
    char i, j;

    for (i = 0; i <= 5; i++)
    {
        for (j = i; j >= 0; j--)
        {
            printf("%c ", j + 65);
        }
        printf("\n");
    }

    return 0;
}
*/

// pattern no 4
/*
    *
   * *
  * * *
 * * * *


*/

#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}