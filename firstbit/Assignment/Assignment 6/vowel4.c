#include <stdio.h>

int vowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        return 1;
    else
        return 0;
}

int main()
{
    char ch;
    int result;

    printf("Enter character: ");
    scanf(" %c", &ch);

    result = vowel(ch);

    if(result == 1)
        printf("Vowel");
    else
        printf("Consonant");

    return 0;
}