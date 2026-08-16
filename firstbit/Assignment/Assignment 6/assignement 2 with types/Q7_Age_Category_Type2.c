#include <stdio.h>
void agecat(int a) {
    if(a<12)printf("Child");
    else if(a<=19)printf("Teenager");
    else if(a<=59)printf("Adult");
    else printf("Senior");
}

int main() {
    int a;
    scanf("%d",&a);
    agecat(a);
    return 0;
}
