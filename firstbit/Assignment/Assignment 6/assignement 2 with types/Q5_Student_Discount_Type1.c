#include <stdio.h>
void discount() {
    float p;
    char s;
    scanf("%f %c",&p,&s);
    if(s=='y'||s=='Y') {
        if(p>500)p*=.8;
        else p*=.9;
    } else if (p>600)p*=.85;
    printf("Final Price = %.2f",p);
}

int main() {
    discount();
    return 0;
}
