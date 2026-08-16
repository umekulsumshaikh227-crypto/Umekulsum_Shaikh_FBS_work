#include <stdio.h>
void triangle() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)printf("Equilateral");
    else if(a==b||b==c||a==c)printf("Isosceles");
    else printf("Scalene");
}

int main() {
    triangle();
    return 0;
}
