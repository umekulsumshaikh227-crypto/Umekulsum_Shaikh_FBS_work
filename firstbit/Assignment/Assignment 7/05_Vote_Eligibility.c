#include <stdio.h>

void checkVotingEligibility(int *age)
{
    if (*age >= 18)
        printf("Eligible to Vote");
    else
        printf("Not Eligible to Vote");
}

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    checkVotingEligibility(&age);

    return 0;
}
