#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    int i;
    printf("enter your string");
    scanf("%s",str);
    printf("\n uppercase:");
    for(i=0;str[i]!='\0';i++){
 printf("%c",toupper(str[i]));
    }
   

    printf("\nlowercase:");
    for(i=0;str[i]!='\0';i++){
 printf("%c",tolower(str[i]));
    }
   

    return 0;
}