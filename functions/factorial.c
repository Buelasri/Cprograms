#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int num;
    printf("enter your choice:");
    scanf("%d",&num);
    printf("factorial=%d",factorial(num));
    return 0;
}