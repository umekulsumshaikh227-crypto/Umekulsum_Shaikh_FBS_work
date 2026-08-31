#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr, n, i, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum = %d", sum);

    free(arr);
    return 0;
}