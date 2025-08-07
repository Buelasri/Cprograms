#include<stdio.h>
#include<string.h>
int main(){
    char password[20];
    printf("enter your password:");
    scanf("%s",password);
    if(strlen(password)>=8)
    printf("strong password.\n");
    else
    printf("weak password.\n");
    return 0;
}