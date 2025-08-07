#include<stdio.h>
#include<string.h>
int main(){
    char s[50];
     int i;
     fgets(s,100,stdin);
     for(i=0;i<strlen(s);i++)
     if(s[i]=='')s[i]='-';
     printf("%s",s);
     return 0;
}