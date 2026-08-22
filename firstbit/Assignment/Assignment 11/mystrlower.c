#include <stdio.h>
void mystrlower(char str[]){int i=0;while(str[i]!='\0'){if(str[i]>='A'&&str[i]<='Z')str[i]+=32;i++;}}
int main(){char str[]="HELLO WORLD";mystrlower(str);printf("Lowercase = %s",str);return 0;}
