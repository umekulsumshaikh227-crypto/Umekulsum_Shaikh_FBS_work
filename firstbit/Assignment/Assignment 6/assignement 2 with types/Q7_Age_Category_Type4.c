#include <stdio.h>
int agecat(int a) {
    if(a<12)return 1;
    if(a<=19)return 2;
    if(a<=59)return 3;
    return 4;
}

int main() {
    int a;
    scanf("%d",&a);
    int r=agecat(a);
    if(r==1)printf("Child");
    else if(r==2)printf("Teenager");
    else if(r==3)printf("Adult");
    else printf("Senior");
    return 0;
}
