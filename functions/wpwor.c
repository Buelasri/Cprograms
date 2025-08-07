#include<stdio.h>
int sub(int a,int b){
    int c=a-b;
    printf("%d\n",c);
}
int main(){
    sub(5,2);
    sub(8,2);
    return 0;
}