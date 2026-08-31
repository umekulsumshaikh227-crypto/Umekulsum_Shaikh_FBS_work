#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr, n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Even numbers:\n");
    for(i = 0; i < n; i++)
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);

    printf("\nOdd numbers:\n");
    for(i = 0; i < n; i++)
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);

    free(arr);
    return 0;
}