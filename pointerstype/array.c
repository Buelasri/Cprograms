#include<stdio.h>
int main(){
    int arr[3]={10,20,30};
    int*ptr=arr;
    printf("first element:%d\n",*ptr);
    printf("second element:%d\n",*(ptr+1));
    printf("third element:%d\n",*(ptr+2));

}