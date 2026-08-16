#include <stdio.h>
int marks() {
    int m;
    scanf("%d",&m);
    if(m>75)return 1;
    if(m>65)return 2;
    if(m>55)return 3;
    if(m>=40)return 4;
    return 5;
}

int main() {
    int r=marks();
    if(r==1)printf("Distinction");
    else if(r==2)printf("First Class");
    else if(r==3)printf("Second Class");
    else if(r==4)printf("Pass Class");
    else printf("Fail");
    return 0;
}
