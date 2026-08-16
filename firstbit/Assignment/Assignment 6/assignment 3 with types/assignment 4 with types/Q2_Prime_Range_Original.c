#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int x=2;x<=n;x++) {
        int f=1;
        for(int i=2;i*i<=x;i++)if(x%i==0) {
            f=0;
            break;
        }
        if(f)printf("%d ",x);
    }
    return 0;
}
