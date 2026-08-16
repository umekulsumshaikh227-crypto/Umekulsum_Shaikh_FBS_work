#include <stdio.h>
float calc() {
    float a,b;
    char op;
    scanf("%f %c %f",&a,&op,&b);
    switch(op) {
        case '+':return a+b;
        case '-':return a-b;
        case '*':return a*b;
        case '/':return b!=0?a/b:0;
        default:return (int)a%(int)b;
    }
}

int main() {
    printf("%.2f",calc());
    return 0;
}
