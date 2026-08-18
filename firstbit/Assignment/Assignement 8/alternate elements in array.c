#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    for(i = 0; i < 5; i = i + 2)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}