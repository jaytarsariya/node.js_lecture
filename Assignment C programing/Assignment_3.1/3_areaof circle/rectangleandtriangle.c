#include <stdio.h>
int main()
{
    int l, w, rectangle, radius;
    float area, triangle, circle;

    printf("enter the radius of circal");
    scanf("%d", &radius);

    area = 3.14 * radius * radius;
    printf("\narea of circal = %f", area);

    printf("\nenter the length :");
    scanf("%d", &l);
    printf("enter the width :");
    scanf("%d", &w);

    rectangle = l * w;
    triangle = (l * w) * 1 / 2;

    printf("\naria of the ractangle : %d", rectangle);
    printf("\narea of the triangle : %f", triangle);
    return 0;
}
