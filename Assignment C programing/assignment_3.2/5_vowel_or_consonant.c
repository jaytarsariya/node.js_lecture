// to show vowel or cosonant using switch case .
#include <stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
        printf("%c is vovel", &ch);
        break;
    case 'e':
        printf("%c is vovel", &ch);
        break;
    case 'i':
        printf("%c is vovel", &ch);
        break;
    case 'o':
        printf("%c is vovel", &ch);
        break;
    case 'u':
        printf("%c is vovel", &ch);
        break;

    case 'A':
        printf("%c is vovel", &ch);
        break;
    case 'E':
        printf("%c is vovel", &ch);
        break;
    case 'I':
        printf("%c is vovel", &ch);
        break;
    case 'O':
        printf("%c is vovel", &ch);
        break;
    case 'U':
        printf("%c is vovel", &ch);
        break;

    default:
        printf("%c is consonant", &ch);
    }

    return 0;
}