#include <stdio.h>
float calc(float a,float b,char op) {
    switch(op) {
        case '+':return a+b;
        case '-':return a-b;
        case '*':return a*b;
        case '/':return b!=0?a/b:0;
        default:return (int)a%(int)b;
    }
}

int main() {
    float a,b;
    char op;
    scanf("%f %c %f",&a,&op,&b);
    printf("%.2f",calc(a,b,op));
    return 0;
}
