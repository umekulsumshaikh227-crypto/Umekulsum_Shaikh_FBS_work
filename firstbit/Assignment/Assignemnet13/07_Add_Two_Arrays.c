#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr, *brr, *crr;
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    brr = (int *)malloc(n * sizeof(int));
    crr = (int *)malloc(n * sizeof(int));

    printf("Enter first array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter second array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &brr[i]);

    for(i = 0; i < n; i++)
        crr[i] = arr[i] + brr[i];

    printf("Third array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", crr[i]);

    free(arr);
    free(brr);
    free(crr);

    return 0;
}