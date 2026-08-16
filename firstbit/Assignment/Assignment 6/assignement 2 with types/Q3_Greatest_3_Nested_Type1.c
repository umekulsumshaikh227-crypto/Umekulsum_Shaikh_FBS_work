#include <stdio.h>
void greatest() {
    int a,b,c,g;
    scanf("%d%d%d",&a,&b,&c);
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
    greatest();
    return 0;
}
