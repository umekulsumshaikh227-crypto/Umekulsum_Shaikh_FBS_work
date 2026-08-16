#include <stdio.h>
int divcheck(int n) {
    if(n%3==0&&n%5==0)return 1;
    if(n%3==0)return 2;
    if(n%5==0)return 3;
    return 4;
}

int main() {
    int n;
    scanf("%d",&n);
    int r=divcheck(n);
    if(r==1)printf("Divisible by both");
    else if(r==2)printf("Divisible by 3 but not by 5");
    else if(r==3)printf("Divisible by 5 but not by 3");
    else printf("Divisible by None");
    return 0;
}
