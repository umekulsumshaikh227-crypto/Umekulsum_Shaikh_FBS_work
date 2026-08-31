#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr, n, i, j, prime;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Prime numbers:\n");

    for(i = 0; i < n; i++)
    {
        if(arr[i] < 2)
            continue;

        prime = 1;

        for(j = 2; j < arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime == 1)
            printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}