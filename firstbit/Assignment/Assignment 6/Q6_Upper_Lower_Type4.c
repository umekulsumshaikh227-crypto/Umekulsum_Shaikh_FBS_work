#include <stdio.h>
int check(char c) {
    if(c>='A'&&c<='Z') return 1;
    if(c>='a'&&c<='z') return 2;
    return 0;
}

int main() {
    char c;
    printf("Enter character: ");
    scanf(" %c",&c);
    int r=check(c);
    if(r==1) printf("Uppercase");
    else if(r==2) printf("Lowercase");
    else printf("Not an alphabet");
    return 0;
}
