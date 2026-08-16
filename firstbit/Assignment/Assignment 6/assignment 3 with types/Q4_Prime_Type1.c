#include <stdio.h>
void program() {
    int n,flag=1;
    scanf("%d",&n);
    if(n<2) flag=0;
    for(int i=2;i*i<=n;i++) if(n%i==0) {
        flag=0;
        break;
    }
    printf(flag?"Prime":"Not Prime");
}

int main() {
    program();
    return 0;
}
