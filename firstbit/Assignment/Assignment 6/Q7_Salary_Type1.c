#include <stdio.h>
void salary() {
    float b,da,ta,hra,total;
    printf("Enter basic salary: ");
    scanf("%f",&b);
    if(b<=5000) {
        da=b*.10;
        ta=b*.20;
        hra=b*.25;
    } else {
        da=b*.15;
        ta=b*.25;
        hra=b*.30;
    }
    total=b+da+ta+hra;
    printf("Total Salary = %.2f",total);
}

int main() {
    salary();
    return 0;
}
