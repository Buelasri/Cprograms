#include<stdio.h>
#include<string.h>
int main(){
     char name[50];
    int count=0,i=0;
    printf("enter college name:");
    gets(name);
    while(name[i]){
        if(name[i]!= ' ' &&(i==0||name[i-1]== ' ' ))
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}