#include<stdio.h>
int main(){
    int arr[5],sum=0;
    printf("enter 4 numbers:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("arrays sum=%d",sum);
    return 0;
}