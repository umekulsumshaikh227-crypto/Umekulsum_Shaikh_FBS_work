#include <stdio.h>
float salary(float b) {
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
    return b+da+ta+hra;
}

int main() {
    float b;
    printf("Enter basic salary: ");
    scanf("%f",&b);
    printf("Total Salary = %.2f",salary(b));
    return 0;
}
