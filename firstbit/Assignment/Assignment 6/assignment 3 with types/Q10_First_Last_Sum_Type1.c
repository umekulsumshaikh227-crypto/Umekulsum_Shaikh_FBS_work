#include <stdio.h>
void program() {
    int n,t,last,first;
    scanf("%d",&n);
    t=n;
    last=n%10;
    while(t>=10)t/=10;
    first=t;
    printf("Sum = %d",first+last);
}

int main() {
    program();
    return 0;
}
