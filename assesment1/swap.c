#include<stdio.h>
int main(){
  int a=5;
  int b=10;  
  int c=15;
  int temp;
  printf("before swapping:%d,%d,%d\n",a,b,c);
  temp=a;
  a=b;
  b=c;
  c=temp;
  printf("after swapping:%d,%d,%d\n",a,b,c);
  return 0;
}
  