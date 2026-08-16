#include <stdio.h>
void check() {
    char c;
    printf("Enter character: ");
    scanf(" %c",&c);
    if(c>='A'&&c<='Z') printf("Uppercase");
    else if(c>='a'&&c<='z') printf("Lowercase");
    else printf("Not an alphabet");
}

int main() {
    check();
    return 0;
}
