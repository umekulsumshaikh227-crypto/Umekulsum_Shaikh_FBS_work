#include <stdio.h>
void program() {
    int n,t,r,sum=0;
    scanf("%d",&n);
    t=n;
    while(t>0) {
        r=t%10;
        sum+=r*r*r;
        t/=10;
    }
    printf(sum==n?"Armstrong":"Not Armstrong");
}

int main() {
    program();
    return 0;
}
