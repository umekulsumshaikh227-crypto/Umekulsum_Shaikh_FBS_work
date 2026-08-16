#include <stdio.h>
int triangle(int a,int b,int c) {
    if(a==b&&b==c)return 1;
    if(a==b||b==c||a==c)return 2;
    return 3;
}

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int r=triangle(a,b,c);
    if(r==1)printf("Equilateral");
    else if(r==2)printf("Isosceles");
    else printf("Scalene");
    return 0;
}
