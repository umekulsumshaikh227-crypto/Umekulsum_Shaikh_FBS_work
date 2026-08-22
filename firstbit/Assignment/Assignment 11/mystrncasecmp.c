#include <stdio.h>
char lowerCase(char ch){if(ch>='A'&&ch<='Z')return ch+32;return ch;}
int mystrncasecmp(char str1[],char str2[],int n){int i;for(i=0;i<n;i++){char a=lowerCase(str1[i]),b=lowerCase(str2[i]);if(a!=b)return a-b;if(a=='\0')return 0;}return 0;}
int main(){char str1[]="HELLO",str2[]="hello";printf("Result = %d",mystrncasecmp(str1,str2,3));return 0;}
