#include<stdio.h>
int main(){
    int n;
    int i=1;
    printf("enter your choice:");
    scanf("%d",&n);
    do{
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }while(i<=10);
    return 0;
}