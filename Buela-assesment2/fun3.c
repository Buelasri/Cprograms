#include<stdio.h>
void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    printf("inside swap:x=%d,y=%d\n",x,y);
}
int main(){
     int a=5;
     int b=10;  
  printf("before swap:%d,%d\n",a,b);
  swap(a,b);
  printf("after swap:%d,%d\n",a,b);
  return 0;
}
