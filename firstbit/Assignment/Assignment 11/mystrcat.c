#include <stdio.h>
void mystrcat(char str1[],char str2[]){int i=0,j=0;while(str1[i]!='\0')i++;while(str2[j]!='\0'){str1[i]=str2[j];i++;j++;}str1[i]='\0';}
int main(){char str1[100]="Hello ",str2[]="World";mystrcat(str1,str2);printf("Result = %s",str1);return 0;}
