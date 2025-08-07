#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    printf("logical AND: a= %d\n",(a<20&& b>10));
    printf("logical OR: b=%d\n",(a<15 || b<10));
    printf("logical NOT:%d\n",!(a==b));
    return 0;
}                               