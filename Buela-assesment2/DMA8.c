#include<stdio.h>
#include<stdlib.h>
int main(){
    char *str;
    int size;
    printf("entr maximum size of the string:");
    scanf("%d",&size);
    if(str==NULL){
        printf("memory allocation failed!\n");
        return 1;
    }
    printf("enter your string:");
    scanf(" ");
    fgets(str,size,stdin);
    printf("you entered:%s,str");
    free(str);
    return 0;
}