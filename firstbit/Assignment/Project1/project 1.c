#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 100

// Structure for Player
struct Player
{
    int jerseyNumber;
    char name[50];
    int runs;
    int wickets;
    int matches;
};

struct Player players[MAX_PLAYERS];
int count = 0;


// Function to Add Player
void addPlayer()
{
    if (count >= MAX_PLAYERS)
    {
        printf("\nPlayer list is full!\n");
        return;
    }

    printf("\nEnter Jersey Number: ");
    scanf("%d", &players[count].jerseyNumber);

    printf("Enter Player Name: ");
    scanf(" %[^\n]", players[count].name);

    printf("Enter Total Runs: ");
    scanf("%d", &players[count].runs);

    printf("Enter Total Wickets: ");
    scanf("%d", &players[count].wickets);

    printf("Enter Matches Played: ");
    scanf("%d", &players[count].matches);

    count++;

    printf("\nPlayer Added Successfully!\n");
}


// Function to Display All Players
void displayAllPlayers()
{
    int i;

    if (count == 0)
    {
        printf("\nNo Players Available!\n");
        return;
    }

    printf("\n-----------------------------------------------\n");
    printf("Jersey\tName\t\tRuns\tWickets\tMatches\n");
    printf("-----------------------------------------------\n");

    for (i = 0; i < count; i++)
    {
        printf("%d\t%-15s\t%d\t%d\t%d\n",
               players[i].jerseyNumber,
               players[i].name,
               players[i].runs,
               players[i].wickets,
               players[i].matches);
    }
}


// Search Player by Jersey Number
void searchByJersey()
{
    int jersey, i;

    printf("\nEnter Jersey Number: ");
    scanf("%d", &jersey);

    for (i = 0; i < count; i++)
    {
        if (players[i].jerseyNumber == jersey)
        {
            printf("\nPlayer Found!\n");

            printf("Jersey Number: %d\n", players[i].jerseyNumber);
            printf("Name: %s\n", players[i].name);
            printf("Runs: %d\n", players[i].runs);
            printf("Wickets: %d\n", players[i].wickets);
            printf("Matches: %d\n", players[i].matches);

            return;
        }
    }

    printf("\nPlayer Not Found!\n");
}


// Search Player by Name
void searchByName()
{
    char name[50];
    int i;

    printf("\nEnter Player Name: ");
    scanf(" %[^\n]", name);

    for (i = 0; i < count; i++)
    {
        if (strcmp(players[i].name, name) == 0)
        {
            printf("\nPlayer Found!\n");

            printf("Jersey Number: %d\n", players[i].jerseyNumber);
            printf("Name: %s\n", players[i].name);
            printf("Runs: %d\n", players[i].runs);
            printf("Wickets: %d\n", players[i].wickets);
            printf("Matches: %d\n", players[i].matches);

            return;
        }
    }

    printf("\nPlayer Not Found!\n");
}


// Remove Player
void removePlayer()
{
    int jersey, i, j;

    printf("\nEnter Jersey Number of Player to Remove: ");
    scanf("%d", &jersey);

    for (i = 0; i < count; i++)
    {
        if (players[i].jerseyNumber == jersey)
        {
            for (j = i; j < count - 1; j++)
            {
                players[j] = players[j + 1];
            }

            count--;

            printf("\nPlayer Removed Successfully!\n");
            return;
        }
    }

    printf("\nPlayer Not Found!\n");
}


// Update Player Data
void updatePlayer()
{
    int jersey, i;

    printf("\nEnter Jersey Number: ");
    scanf("%d", &jersey);

    for (i = 0; i < count; i++)
    {
        if (players[i].jerseyNumber == jersey)
        {
            printf("\nEnter New Runs: ");
            scanf("%d", &players[i].runs);

            printf("Enter New Wickets: ");
            scanf("%d", &players[i].wickets);

            printf("Enter New Matches Played: ");
            scanf("%d", &players[i].matches);

            printf("\nPlayer Updated Successfully!\n");
            return;
        }
    }

    printf("\nPlayer Not Found!\n");
}


// Sort by Maximum Runs
void sortByMaxRuns()
{
    struct Player temp;
    int i, j;

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (players[j].runs < players[j + 1].runs)
            {
                temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }

    printf("\nPlayers Sorted by Maximum Runs:\n");
    displayAllPlayers();
}


// Sort by Minimum Runs
void sortByMinRuns()
{
    struct Player temp;
    int i, j;

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (players[j].runs > players[j + 1].runs)
            {
                temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }

    printf("\nPlayers Sorted by Minimum Runs:\n");
    displayAllPlayers();
}


// Sort by Maximum Wickets
void sortByMaxWickets()
{
    struct Player temp;
    int i, j;

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (players[j].wickets < players[j + 1].wickets)
            {
                temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }

    printf("\nPlayers Sorted by Maximum Wickets:\n");
    displayAllPlayers();
}


// Sort by Minimum Wickets
void sortByMinWickets()
{
    struct Player temp;
    int i, j;

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (players[j].wickets > players[j + 1].wickets)
            {
                temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }

    printf("\nPlayers Sorted by Minimum Wickets:\n");
    displayAllPlayers();
}


// Top 3 Players by Runs
void top3Runs()
{
    struct Player temp[MAX_PLAYERS];
    int i, j;

    if (count == 0)
    {
        printf("\nNo Players Available!\n");
        return;
    }

    for (i = 0; i < count; i++)
    {
        temp[i] = players[i];
    }

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (temp[j].runs < temp[j + 1].runs)
            {
                struct Player swap = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = swap;
            }
        }
    }

    printf("\nTop 3 Players by Runs:\n");

    for (i = 0; i < count && i < 3; i++)
    {
        printf("%d. %s - %d Runs\n",
               i + 1,
               temp[i].name,
               temp[i].runs);
    }
}


// Top 3 Players by Wickets
void top3Wickets()
{
    struct Player temp[MAX_PLAYERS];
    int i, j;

    if (count == 0)
    {
        printf("\nNo Players Available!\n");
        return;
    }

    for (i = 0; i < count; i++)
    {
        temp[i] = players[i];
    }

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (temp[j].wickets < temp[j + 1].wickets)
            {
                struct Player swap = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = swap;
            }
        }
    }

    printf("\nTop 3 Players by Wickets:\n");

    for (i = 0; i < count && i < 3; i++)
    {
        printf("%d. %s - %d Wickets\n",
               i + 1,
               temp[i].name,
               temp[i].wickets);
    }
}


// Main Function
int main()
{
    int choice;

    do
    {
        printf("\n\n========== PLAYER MANAGEMENT SYSTEM ==========\n");

        printf("1. Add Player\n");
        printf("2. Remove Player\n");
        printf("3. Search Player by Jersey Number\n");
        printf("4. Search Player by Name\n");
        printf("5. Update Player Data\n");
        printf("6. Display All Players\n");
        printf("7. Sort by Maximum Runs\n");
        printf("8. Sort by Minimum Runs\n");
        printf("9. Sort by Maximum Wickets\n");
        printf("10. Sort by Minimum Wickets\n");
        printf("11. Top 3 Players by Runs\n");
        printf("12. Top 3 Players by Wickets\n");
        printf("0. Exit\n");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addPlayer();
                break;

            case 2:
                removePlayer();
                break;

            case 3:
                searchByJersey();
                break;

            case 4:
                searchByName();
                break;

            case 5:
                updatePlayer();
                break;

            case 6:
                displayAllPlayers();
                break;

            case 7:
                sortByMaxRuns();
                break;

            case 8:
                sortByMinRuns();
                break;

            case 9:
                sortByMaxWickets();
                break;

            case 10:
                sortByMinWickets();
                break;

            case 11:
                top3Runs();
                break;

            case 12:
                top3Wickets();
                break;

            case 0:
                printf("\nThank You! Exiting Player Management System...\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while (choice != 0);

    return 0;
}