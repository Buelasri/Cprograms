#include<stdio.h>
#include<string.h>
int main(){
    char username[20];
    printf("enter username:");
    scanf("%s",username);
    if(strcmp(username,"buela")==0)
    printf("access granted.\n");
    else
    printf("access denied.\n");
    return 0;
}