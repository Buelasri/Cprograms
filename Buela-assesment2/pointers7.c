#include<stdio.h>
int main(){
    int arr[100]={10,20,30,40,50};
    int*ptr=arr;
    printf("%d\n",arr[2]);// array indexing
    printf("%d\n",*(ptr+2));//pointer indexing
    return 0;
}