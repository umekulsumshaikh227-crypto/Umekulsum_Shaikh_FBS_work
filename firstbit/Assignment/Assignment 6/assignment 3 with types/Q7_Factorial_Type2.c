#include <stdio.h>
void program(int n) {
    int n;
    long long f=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) f*=i;
    printf("%lld",f);
}

int main() {
    int n;
    scanf("%d",&n);
    program(n);
    return 0;
}
