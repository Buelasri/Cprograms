#include<stdio.h>
int add(int a,int b){
    int c=a+b;
    return a+b;
}
int main(){
    int x=5,y=10;
    int sum=add(x,y);
    printf("sum=%d",sum);
    return 0;
}