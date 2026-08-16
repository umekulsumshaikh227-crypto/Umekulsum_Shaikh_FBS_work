#include <stdio.h>
int greatest(int a,int b,int c) {
    if(a>b) {
        if(a>c)return a;
        else return c;
    } else {
        if(b>c)return b;
        else return c;
    }
}

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("Greatest = %d",greatest(a,b,c));
    return 0;
}
