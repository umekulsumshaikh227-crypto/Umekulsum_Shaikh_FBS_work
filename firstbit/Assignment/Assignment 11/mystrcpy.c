#include <stdio.h>
void mystrcpy(char dest[], char src[]){int i=0; while(src[i]!='\0'){dest[i]=src[i];i++;}dest[i]='\0';}
int main(){char str1[100]="Hello",str2[100];mystrcpy(str2,str1);printf("Copied string = %s",str2);return 0;}
