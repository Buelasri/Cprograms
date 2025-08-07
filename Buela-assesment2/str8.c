#include<stdio.h>
#include<string.h>
int main(){
    char str1[50],str2[50];
    printf("enter a string:");
    scanf("%s",str1);
    strcpy(str2,str1);
    printf("copied string:%s\n",str2);
    return 0;
}