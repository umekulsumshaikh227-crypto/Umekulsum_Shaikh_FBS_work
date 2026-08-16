#include <stdio.h>
void program(int n) {
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
    int n;
    scanf("%d",&n);
    program(n);
    return 0;
}
