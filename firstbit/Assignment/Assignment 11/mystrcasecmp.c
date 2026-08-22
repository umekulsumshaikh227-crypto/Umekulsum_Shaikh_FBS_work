#include <stdio.h>
char lower(char ch){if(ch>='A'&&ch<='Z')return ch+32;return ch;}
int mystrcasecmp(char str1[],char str2[]){int i=0;while(str1[i]!='\0'||str2[i]!='\0'){char a=lower(str1[i]),b=lower(str2[i]);if(a!=b)return a-b;i++;}return 0;}
int main(){char str1[]="HELLO",str2[]="hello";printf("Result = %d",mystrcasecmp(str1,str2));return 0;}
