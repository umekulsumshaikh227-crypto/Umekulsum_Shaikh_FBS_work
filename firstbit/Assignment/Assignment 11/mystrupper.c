#include <stdio.h>
void mystrupper(char str[]){int i=0;while(str[i]!='\0'){if(str[i]>='a'&&str[i]<='z')str[i]-=32;i++;}}
int main(){char str[]="hello world";mystrupper(str);printf("Uppercase = %s",str);return 0;}
