#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr, *brr, *crr;
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    arr = (int *)malloc(n1 * sizeof(int));
    brr = (int *)malloc(n2 * sizeof(int));
    crr = (int *)malloc((n1 + n2) * sizeof(int));

    printf("Enter first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
        crr[i] = arr[i];
    }

    printf("Enter second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &brr[i]);
        crr[n1 + i] = brr[i];
    }

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", crr[i]);

    free(arr);
    free(brr);
    free(crr);

    return 0;
}