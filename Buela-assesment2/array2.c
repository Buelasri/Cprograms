#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    printf("reversed array:");
    for(int i=7;i>=0;i--){
    printf("%d",arr[i]);
    }
    return 0;
}  