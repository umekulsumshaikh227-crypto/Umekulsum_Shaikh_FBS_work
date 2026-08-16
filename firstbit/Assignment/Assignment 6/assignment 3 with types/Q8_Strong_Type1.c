#include <stdio.h>
void program() {
    int n,t,r,sum=0;
    scanf("%d",&n);
    t=n;
    while(t>0) {
        int x=t%10,f=1;
        for(int i=1;i<=x;i++)f*=i;
        sum+=f;
        t/=10;
    }
    printf(sum==n?"Strong":"Not Strong");
}

int main() {
    program();
    return 0;
}
