// wap of structure employee that provides the following information print and display no,age,name,address.

#include <stdio.h>
struct employee
{

    int no;
    char name[100];
    int age;
    char address[200];
};

int main()
{
    struct employee s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("enter employee detail\n");

        printf("1->  no\n2->  age\n3->  name\n4->  address\n");

        scanf("%d %d %s %s", &s[i].no, &s[i].age, s[i].name, s[i].address);

        // printf("no=%d\n,age=%d\n,name=%c\n,address=%c\n", s[i].no, s[i].age, s[i].name, s[i].address);
    }

    return 0;
}