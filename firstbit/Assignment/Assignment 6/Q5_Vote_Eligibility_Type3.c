#include <stdio.h>
int vote() {
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    return age>=18;
}

int main() {
    if(vote()) printf("Eligible to vote");
    else printf("Not eligible to vote");
    return 0;
}
