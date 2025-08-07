#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i,len;
    printf("enter a string:");
    scanf("%s",str);
    len=strlen(str);
    printf("reversed:");
    for(i=len-1;i>=0;i--)
    printf("%c",str[i]);
    return 0;
}