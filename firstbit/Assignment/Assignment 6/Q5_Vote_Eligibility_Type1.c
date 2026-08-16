#include <stdio.h>
void vote() {
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    if(age>=18) printf("Eligible to vote");
    else printf("Not eligible to vote");
}

int main() {
    vote();
    return 0;
}
