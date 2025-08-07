#include<stdio.h>
int main(){
    int arr[6]={23,34,35,56,67,68};
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<6;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    printf("maximum element=%d",max);
    for(int i=1;i<6;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    printf("minimum element=%d",min);
    return 0;
}
    