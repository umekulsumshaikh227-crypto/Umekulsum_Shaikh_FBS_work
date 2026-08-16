#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int x=1;x<=n;x++) {
        int s=0;
        for(int i=1;i<x;i++)if(x%i==0)s+=i;
        if(s==x)printf("%d ",x);
    }
    return 0;
}
