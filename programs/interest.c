#include<stdio.h>
int main(){
    float interest,principle,time,rate;
    printf("enter your choice : ");
    scanf("%f",&principle);
    printf("enter your choice : ");
    scanf("%f",&time);
    printf("enter your choice : ");
    scanf("%f",&rate);
    interest =principle*time*rate/100;
    printf("interest is %f \n",interest);
    return 0;
}