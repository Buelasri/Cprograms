#include<stdio.h>
int main(){
    char str[100];
    char *ptr;
    int length=0;
    printf("enter a string:");
    gets(str);
    ptr=str;
    while(*ptr!='\0'){
        length++;
        ptr++;
    }
    printf("length of the string=%d\n",length);
    return 0;
}