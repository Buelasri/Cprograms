#include<stdio.h>
void change(int*p){
    *p=100;
}
int main(){
    int a=10;
    change(&a);
    printf("a=%d\n",a);
    return 0;
}