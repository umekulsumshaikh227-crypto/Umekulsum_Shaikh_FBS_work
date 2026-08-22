#include <stdio.h>
char *mystrnstr(char str[],char sub[],int n){int i,j;for(i=0;str[i]!='\0'&&i<n;i++){j=0;while(sub[j]!='\0'&&str[i+j]!='\0'&&i+j<n&&str[i+j]==sub[j])j++;if(sub[j]=='\0')return &str[i];}return NULL;}
int main(){char str[]="Hello World",sub[]="World";if(mystrnstr(str,sub,11)!=NULL)printf("Substring found");else printf("Substring not found");return 0;}
