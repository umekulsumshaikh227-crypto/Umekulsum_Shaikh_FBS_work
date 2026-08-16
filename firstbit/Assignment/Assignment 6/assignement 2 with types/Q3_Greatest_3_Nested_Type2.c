#include <stdio.h>
void greatest(int a,int b,int c) {
    int g;
    if(a>b) {
        if(a>c)g=a;
        else g=c;
    } else {
        if(b>c)g=b;
        else g=c;
    }
    printf("Greatest = %d",g);
}

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    greatest(a,b,c);
    return 0;
}
