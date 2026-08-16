#include <stdio.h>
void calc(float a,float b,char op) {
    switch(op) {
        case '+':printf("%.2f",a+b);
        break;
        case '-':printf("%.2f",a-b);
        break;
        case '*':printf("%.2f",a*b);
        break;
        case '/':if(b!=0)printf("%.2f",a/b);
        else printf("Cannot divide by zero");
        break;
        case '%':printf("%d",(int)a%(int)b);
        break;
        default:printf("Invalid operator");
    }
}

int main() {
    float a,b;
    char op;
    scanf("%f %c %f",&a,&op,&b);
    calc(a,b,op);
    return 0;
}
