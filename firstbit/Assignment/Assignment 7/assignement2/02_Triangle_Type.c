#include <stdio.h>

void triangleType(int *a, int *b, int *c)
{
    if (*a + *b <= *c || *a + *c <= *b || *b + *c <= *a)
        printf("Invalid Triangle");
    else if (*a == *b && *b == *c)
        printf("Equilateral Triangle");
    else if (*a == *b || *b == *c || *a == *c)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");
}

int main()
{
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    triangleType(&a, &b, &c);

    return 0;
}
