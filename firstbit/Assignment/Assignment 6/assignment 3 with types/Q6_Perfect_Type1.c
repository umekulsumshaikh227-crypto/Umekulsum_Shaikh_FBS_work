#include <stdio.h>
void program() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++) if(n%i==0) sum+=i;
    printf(sum==n?"Perfect":"Not Perfect");
}

int main() {
    program();
    return 0;
}
