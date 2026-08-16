#include <stdio.h>
int vote(int age) {
    return age>=18;
}

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    if(vote(age)) printf("Eligible to vote");
    else printf("Not eligible to vote");
    return 0;
}
