#include <stdio.h>

void vowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel");
    else
        printf("Consonant");
}

int main()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c", &ch);

    vowel(ch);

    return 0;
}