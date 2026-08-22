#include <stdio.h>
char *mystrrchr(char str[],char ch){int i=0;char *last=NULL;while(str[i]!='\0'){if(str[i]==ch)last=&str[i];i++;}return last;}
int main(){char str[]="Hello World";if(mystrrchr(str,'l')!=NULL)printf("Last occurrence found");else printf("Character not found");return 0;}
