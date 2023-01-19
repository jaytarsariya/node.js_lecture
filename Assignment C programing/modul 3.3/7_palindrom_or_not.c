// wap to revers a string and check that the string ispalindrom or not.
// for ex.323........> 323

#include <stdio.h>

int main()
{
    int n, c, s = 0, r;
    printf("enter any number\n");
    printf(">>>>>>>>>>>>>>>>\n");
    scanf("%d|",&n);
    printf(">>>>>>>>>>>>>>>>\n");
    c = n;
    while (n > 0)
    {
        r = n % 10;
        s = r + (s * 10);
        n = n / 10;
    }
    if (c == s)
      {
        printf("this is a palindrome number:\n");
        printf("____________________________");
        }

    else
      {  printf("not");}
      return 0;
}
   

    
