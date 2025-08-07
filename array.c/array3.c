#include<stdio.h>
int main(){
    int arr[5]={11,24,67,34,23};
    int max=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max){
        max=arr[i];
    }
    }
    printf("maximum element=%d",max);
    return 0;
}