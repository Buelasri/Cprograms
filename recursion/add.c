#include<stdio.h>
int sum(int n){
    if(n==5){
        return 5;
    }else{
        return n+sum(n-1);
    }
}
int main(){
    int result=sum(10);
    printf("sum=%d\n",result);
    return 0;
}