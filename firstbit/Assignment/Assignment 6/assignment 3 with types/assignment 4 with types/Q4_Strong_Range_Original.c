#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int x=1;x<=n;x++) {
        int t=x,s=0;
        while(t) {
            int d=t%10,f=1;
            for(int i=1;i<=d;i++)f*=i;
            s+=f;
            t/=10;
        }
        if(s==x)printf("%d ",x);
    }
    return 0;
}
