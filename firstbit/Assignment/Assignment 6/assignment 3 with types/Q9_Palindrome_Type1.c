#include <stdio.h>
void program() {
    int n,t,r,rev=0;
    scanf("%d",&n);
    t=n;
    while(t>0) {
        r=t%10;
        rev=rev*10+r;
        t/=10;
    }
    printf(rev==n?"Palindrome":"Not Palindrome");
}

int main() {
    program();
    return 0;
}
