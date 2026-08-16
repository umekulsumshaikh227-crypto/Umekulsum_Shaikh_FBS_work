#include <stdio.h>
void salary(float b) {
    float da,ta,hra;
    if(b<=5000) {
        da=b*.10;
        ta=b*.20;
        hra=b*.25;
    } else {
        da=b*.15;
        ta=b*.25;
        hra=b*.30;
    }
    printf("Total Salary = %.2f",b+da+ta+hra);
}

int main() {
    float b;
    printf("Enter basic salary: ");
    scanf("%f",&b);
    salary(b);
    return 0;
}
