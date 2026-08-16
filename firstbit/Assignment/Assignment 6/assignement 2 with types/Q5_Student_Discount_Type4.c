#include <stdio.h>
float discount(float p,char s) {
    if(s=='y'||s=='Y') {
        if(p>500)p*=.8;
        else p*=.9;
    } else if (p>600)p*=.85;
    return p;
}

int main() {
    float p;
    char s;
    scanf("%f %c",&p,&s);
    printf("Final Price = %.2f",discount(p,s));
    return 0;
}
