#include <stdio.h>
void program() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++) printf("%d ",n*i);
}

int main() {
    program();
    return 0;
}
