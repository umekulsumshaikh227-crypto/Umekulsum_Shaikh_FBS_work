#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int x=1;x<=n;x++) {
        int t=x,r,s=0;
        while(t) {
            r=t%10;
            s+=r*r*r;
            t/=10;
        }
        if(s==x)printf("%d ",x);
    }
    return 0;
}
