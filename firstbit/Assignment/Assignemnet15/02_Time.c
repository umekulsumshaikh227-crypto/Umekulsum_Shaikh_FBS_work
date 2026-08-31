#include <stdio.h>

struct Time
{
    int hrs;
    int min;
    int sec;
};

int main()
{
    struct Time t1, t2, result;
    int totalSeconds;

    printf("Enter First Time\n");

    printf("Hours: ");
    scanf("%d", &t1.hrs);

    printf("Minutes: ");
    scanf("%d", &t1.min);

    printf("Seconds: ");
    scanf("%d", &t1.sec);

    printf("\nEnter Second Time\n");

    printf("Hours: ");
    scanf("%d", &t2.hrs);

    printf("Minutes: ");
    scanf("%d", &t2.min);

    printf("Seconds: ");
    scanf("%d", &t2.sec);

    result.hrs = t1.hrs + t2.hrs;
    result.min = t1.min + t2.min;
    result.sec = t1.sec + t2.sec;

    if(result.sec >= 60)
    {
        result.min = result.min + result.sec / 60;
        result.sec = result.sec % 60;
    }

    if(result.min >= 60)
    {
        result.hrs = result.hrs + result.min / 60;
        result.min = result.min % 60;
    }

    printf("\n--- Added Time ---\n");
    printf("%d Hours %d Minutes %d Seconds\n",
           result.hrs, result.min, result.sec);

    totalSeconds = t1.hrs * 3600 +
                   t1.min * 60 +
                   t1.sec;

    printf("\nFirst Time in Seconds = %d\n", totalSeconds);

    return 0;
}
