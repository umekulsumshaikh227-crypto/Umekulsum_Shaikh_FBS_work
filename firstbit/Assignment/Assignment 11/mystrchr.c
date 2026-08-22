#include <stdio.h>
char *mystrchr(char str[],char ch){int i=0;while(str[i]!='\0'){if(str[i]==ch)return &str[i];i++;}return NULL;}
int main(){char str[]="Hello World";if(mystrchr(str,'W')!=NULL)printf("Character found");else printf("Character not found");return 0;}
