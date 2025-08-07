#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int b[7]={6,7,8,9,10,11,12};
    int merged[12];
    int i,j;
    for(i=0;i<5;i++){
        merged[i]=a[i];
    }
        for(j=0;j<7;j++){
        merged[i+j]=b[j];
        }
        printf("merged array:");
        for(i=0;i<12;i++){
            printf("%d",merged[i]);
        }
    return 0;
}