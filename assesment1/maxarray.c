#include<stdio.h>
int main(){
    int arr[6]={6,9,18,31,25,8};
    int max=arr[0];
    for(int i=1;i<6;i++){
        if(arr[i]>max){
        max=arr[i];
    }
    }
    printf("maximum element=%d",max);
    return 0;
}