#include<stdio.h>
int main(){
    int arr[3]={10,20,30};
    int*p=arr;
    printf("first element:%d\n",*p);
    p++;
    printf("second element:%d\n",*p);
    p++;
    printf("third element:%d\n",*p);
return 0;
}