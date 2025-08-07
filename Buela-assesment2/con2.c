#include<stdio.h>
int main(){
    int num;
    printf("enter your choice:");
    scanf("%d",&num);
    if(num>0){
        printf("chosen number is positive");
    }
    else if(num<0){
        printf("chosen number is negative");
    }else if(num==0){
        printf("chosen number is zero");
    }
    return 0;
}