#include <stdio.h>

int main()
{
    int no1 = 10;
    int no2 = 20;
    int temp;

    printf("Before swapping:\n");
    printf("no1 = %d\n", no1);
    printf("no2 = %d\n", no2);

    temp = no1;
    no1 = no2;
    no2 = temp;

    printf("After swapping:\n");
    printf("no1 = %d\n", no1);
    printf("no2 = %d\n", no2);

    return 0;
}
