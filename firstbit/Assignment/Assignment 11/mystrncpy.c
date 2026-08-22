#include <stdio.h>
void mystrncpy(char dest[],char src[],int n){int i;for(i=0;i<n&&src[i]!='\0';i++)dest[i]=src[i];dest[i]='\0';}
int main(){char str1[]="Programming",str2[100];mystrncpy(str2,str1,5);printf("Result = %s",str2);return 0;}
