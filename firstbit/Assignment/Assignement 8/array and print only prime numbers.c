#include <stdio.h>

int main()
{
    int arr[5];
    int i, j;
    int count;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers are:\n");

    for(i = 0; i < 5; i++)
    {
        count = 0;

        if(arr[i] < 2)
        {
            continue;
        }

        for(j = 1; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}