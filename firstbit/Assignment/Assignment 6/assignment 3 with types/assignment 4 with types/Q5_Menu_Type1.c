#include <stdio.h>
void menu() {
    int n,ch;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("1 Even/Odd\n2 Prime\n3 Palindrome\n4 Positive/Negative/Zero\n5 Reverse\n6 Sum of digits\nEnter choice: ");
    scanf("%d",&ch);
    if(ch==1)printf(n%2==0?"Even":"Odd");
    else if(ch==2) {
        int f=1;
        if(n<2)f=0;
        for(int i=2;i*i<=n;i++)if(n%i==0) {
            f=0;
            break;
        }
        printf(f?"Prime":"Not Prime");
    } else if (ch==3) {
        int t=n,r,rev=0;
        while(t) {
            r=t%10;
            rev=rev*10+r;
            t/=10;
        }
        printf(rev==n?"Palindrome":"Not Palindrome");
    } else if (ch==4)printf(n>0?"Positive":n<0?"Negative":"Zero");
    else if(ch==5) {
        int t=n,r,rev=0;
        while(t) {
            r=t%10;
            rev=rev*10+r;
            t/=10;
        }
        printf("Reverse = %d",rev);
    } else if (ch==6) {
        int t=n,sum=0;
        while(t) {
            sum+=t%10;
            t/=10;
        }
        printf("Sum = %d",sum);
    }else printf("Invalid choice");
}

int main() {
    menu();
    return 0;
}
