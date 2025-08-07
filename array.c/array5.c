#include<stdio.h>
int main(){
    int original[5]={1,2,3,4,5};
    int copy[5];
    printf("reversed array:");
    for(int i=0;i<5;i++){
        copy[i]=original[i];
    }
    printf("copied array:");
    for(int i=0;i,5;i++){
    printf("%d",copy[i]);
    }
    return 0;
}