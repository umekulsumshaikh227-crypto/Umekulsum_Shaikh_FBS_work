#include <stdio.h>
#include <string.h>

struct Movie
{
    char title[50];
    char director[50];
    int year;
    char genre[50];
};

int main()
{
    struct Movie m[10];
    int n = 0;
    int choice;
    int i, found;
    char searchTitle[50];

    do
    {
        printf("\n--- MOVIE DATABASE ---\n");
        printf("1. Add Movie\n");
        printf("2. Display Movies\n");
        printf("3. Search Movie\n");
        printf("4. Update Movie\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(n >= 10)
                {
                    printf("\nDatabase is Full!\n");
                    break;
                }

                printf("\nEnter Movie Title: ");
                scanf(" %[^\n]", m[n].title);

                printf("Enter Director Name: ");
                scanf(" %[^\n]", m[n].director);

                printf("Enter Release Year: ");
                scanf("%d", &m[n].year);

                printf("Enter Genre: ");
                scanf(" %[^\n]", m[n].genre);

                n++;

                printf("\nMovie Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo Movies Available!\n");
                }
                else
                {
                    for(i = 0; i < n; i++)
                    {
                        printf("\nMovie %d\n", i + 1);
                        printf("Title: %s\n", m[i].title);
                        printf("Director: %s\n", m[i].director);
                        printf("Year: %d\n", m[i].year);
                        printf("Genre: %s\n", m[i].genre);
                    }
                }
                break;

            case 3:
                printf("Enter Movie Title to Search: ");
                scanf(" %[^\n]", searchTitle);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(strcmp(searchTitle, m[i].title) == 0)
                    {
                        printf("\nMovie Found!\n");
                        printf("Title: %s\n", m[i].title);
                        printf("Director: %s\n", m[i].director);
                        printf("Year: %d\n", m[i].year);
                        printf("Genre: %s\n", m[i].genre);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("\nMovie Not Found!\n");
                }
                break;

            case 4:
                printf("Enter Movie Title to Update: ");
                scanf(" %[^\n]", searchTitle);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(strcmp(searchTitle, m[i].title) == 0)
                    {
                        printf("\nEnter New Director: ");
                        scanf(" %[^\n]", m[i].director);

                        printf("Enter New Release Year: ");
                        scanf("%d", &m[i].year);

                        printf("Enter New Genre: ");
                        scanf(" %[^\n]", m[i].genre);

                        printf("\nMovie Updated Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("\nMovie Not Found!\n");
                }
                break;

            case 5:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }
    }
    while(choice != 5);

    return 0;
}
