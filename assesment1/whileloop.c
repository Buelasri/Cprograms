#include<stdio.h>
int main(){
    int i=1;
    int fact=1;
    int N;
    printf("enter your choice");
    scanf("%d",&N);
    while(i<=N){
        fact=fact*i;
        i++;
    }
    printf("%d",fact,i);
    return 0;
}
