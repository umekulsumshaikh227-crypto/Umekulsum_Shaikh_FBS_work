#include <stdio.h>
float discount() {
    float p;
    char s;
    scanf("%f %c",&p,&s);
    if(s=='y'||s=='Y') {
        if(p>500)p*=.8;
        else p*=.9;
    } else if (p>600)p*=.85;
    return p;
}

int main() {
    printf("Final Price = %.2f",discount());
    return 0;
}
