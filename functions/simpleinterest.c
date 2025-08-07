#include<stdio.h>
float simpleinterest(float principal,float rate,int time){
    return(principal*rate*time)/100;
}
int main(){
    float p,r;
    int t; 
    printf("enter principal amount:");
    scanf("%f",&p);
    printf("enter rate of interest:");
    scanf("%f",&r);
    printf("enter time(in years):");
    scanf("%d",&t);
    printf("simple interest:%.2f\n",simpleinterest(p,r,t));
    return 0;
}