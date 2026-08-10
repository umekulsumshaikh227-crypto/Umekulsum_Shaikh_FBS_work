#include <stdio.h>

void vowel()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c", &ch);S

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel");
    else
        printf("Consonant");
}

int main()
{
    vowel();

    return 0;
}