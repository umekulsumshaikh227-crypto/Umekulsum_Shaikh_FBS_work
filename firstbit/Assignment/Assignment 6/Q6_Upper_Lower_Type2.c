#include <stdio.h>
void check(char c) {
    if(c>='A'&&c<='Z') printf("Uppercase");
    else if(c>='a'&&c<='z') printf("Lowercase");
    else printf("Not an alphabet");
}

int main() {
    char c;
    printf("Enter character: ");
    scanf(" %c",&c);
    check(c);
    return 0;
}
