#include<stdio.h>                                                       
int findmax(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    return(a>b)?a:b;
}
int main(){
    int max=findmax();
    printf("maximum=%d",max);
    return 0;
}