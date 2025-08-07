#include<stdio.h>
void swap(int*x,int*y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
     int a=5;
     int b=10;  
  printf("before swapping:%d,%d\n",a,b);
  swap(&a,&b);
  printf("after swapping:%d,%d\n",a,b);
  return 0;
}
