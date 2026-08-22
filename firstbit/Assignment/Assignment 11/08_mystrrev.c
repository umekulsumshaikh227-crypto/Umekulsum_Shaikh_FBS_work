#include <stdio.h>              // printf() ke liye

void mystrrev(char str[])       // Reverse function
{
    int i = 0;                  // Starting index
    int j = 0;                  // Ending index
    char temp;                  // Temporary variable

    while (str[j] != '\0')      // String ki length find
        j++;

    j--;                        // Last character ka index

    while (i < j)               // Jab tak middle na aaye
    {
        temp = str[i];          // First character save
        str[i] = str[j];        // Last character first me
        str[j] = temp;          // Saved character last me

        i++;                    // Aage
        j--;                    // Peeche
    }
}

int main()
{
    char str[] = "Hello";       // String

    mystrrev(str);              // Reverse karo

    printf("Reverse = %s", str); // Result

    return 0;                   // Program end
}
