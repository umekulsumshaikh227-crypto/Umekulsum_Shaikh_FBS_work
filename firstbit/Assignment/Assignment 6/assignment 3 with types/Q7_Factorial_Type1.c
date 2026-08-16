#include <stdio.h>
void program() {
    int n;
    long long f=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) f*=i;
    printf("%lld",f);
}

int main() {
    program();
    return 0;
}
