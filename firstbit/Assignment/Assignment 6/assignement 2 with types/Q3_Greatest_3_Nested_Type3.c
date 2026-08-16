#include <stdio.h>
int greatest() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b) {
        if(a>c)return a;
        else return c;
    } else {
        if(b>c)return b;
        else return c;
    }
}

int main() {
    printf("Greatest = %d",greatest());
    return 0;
}
