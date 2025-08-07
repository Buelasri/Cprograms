#include<stdio.h>
int main(){
    int year;
    printf("enter your choice");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100==0||year%400==0){
            printf("is a leap year");
        }
    }else{
        printf("is not a year");
    }
    return 0;
}