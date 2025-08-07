#include<stdio.h>
int printnumbers(int n){
    if (n==0)
    return 0;
    printnumbers(n-1);
    printf("%d",n);
    return 0;
}
int main(){
    int num;
    printf("enter a positive number:");
    scanf("%d",&num);

    printf("numbers from 1 to %dare:",num);
    printnumbers(num);
    return 0;
}