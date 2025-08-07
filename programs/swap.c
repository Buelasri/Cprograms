#include<stdio.h>
int main(){
    int a=5;
    int b=10;
    printf("before swapping:a=%d,b=%d \n",a,b);
    a =a+b;
    a =a-b;
    b =a-b; 
    printf("after swapping:a %d,b=%d \n",a,b);
    return 0; 
}