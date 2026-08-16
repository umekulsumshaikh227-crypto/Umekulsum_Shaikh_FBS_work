#include <stdio.h>
void vote(int age) {
    if(age>=18) printf("Eligible to vote");
    else printf("Not eligible to vote");
}

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    vote(age);
    return 0;
}
