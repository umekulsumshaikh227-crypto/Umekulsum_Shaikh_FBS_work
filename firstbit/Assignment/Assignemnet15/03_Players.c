#include <stdio.h>

struct Player
{
    char name[50];
    int matches;
    int runs;
    int wickets;
};

void acceptPlayer(struct Player p[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Player %d Information\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", p[i].name);

        printf("Matches Played: ");
        scanf("%d", &p[i].matches);

        printf("Runs: ");
        scanf("%d", &p[i].runs);

        printf("Wickets: ");
        scanf("%d", &p[i].wickets);
    }
}

void displayPlayer(struct Player p[], int n)
{
    int i;

    printf("\n--- All Players Information ---\n");

    for(i = 0; i < n; i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("Name: %s\n", p[i].name);
        printf("Matches: %d\n", p[i].matches);
        printf("Runs: %d\n", p[i].runs);
        printf("Wickets: %d\n", p[i].wickets);
    }
}

void maximumRuns(struct Player p[], int n)
{
    int i;
    int max = 0;

    for(i = 1; i < n; i++)
    {
        if(p[i].runs > p[max].runs)
        {
            max = i;
        }
    }

    printf("\n--- Maximum Runs ---\n");
    printf("Name: %s\n", p[max].name);
    printf("Runs: %d\n", p[max].runs);
}

void maximumWickets(struct Player p[], int n)
{
    int i;
    int max = 0;

    for(i = 1; i < n; i++)
    {
        if(p[i].wickets > p[max].wickets)
        {
            max = i;
        }
    }

    printf("\n--- Maximum Wickets ---\n");
    printf("Name: %s\n", p[max].name);
    printf("Wickets: %d\n", p[max].wickets);
}

int main()
{
    struct Player p[10];

    acceptPlayer(p, 10);
    displayPlayer(p, 10);
    maximumRuns(p, 10);
    maximumWickets(p, 10);

    return 0;
}
