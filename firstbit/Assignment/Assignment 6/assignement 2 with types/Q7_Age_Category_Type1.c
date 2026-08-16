#include <stdio.h>
void agecat() {
    int a;
    scanf("%d",&a);
    if(a<12)printf("Child");
    else if(a<=19)printf("Teenager");
    else if(a<=59)printf("Adult");
    else printf("Senior");
}

int main() {
    agecat();
    return 0;
}
