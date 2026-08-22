#include <stdio.h>
int mystrncmp(char str1[],char str2[],int n){int i;for(i=0;i<n;i++){if(str1[i]!=str2[i])return str1[i]-str2[i];if(str1[i]=='\0')return 0;}return 0;}
int main(){char str1[]="Hello",str2[]="Help";printf("Result = %d",mystrncmp(str1,str2,3));return 0;}
