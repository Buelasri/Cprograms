#include<stdio.h>
int main(){
    int x=100;
    int *p=&x;
    int **pp=&p;
    printf("value of x:%d\n",x);
    printf("address of x:%d\n",(void*)&x);
    printf("value using*p:%d\n",*p);
    printf("address of *p:%d\n",(void*)&*p);
    printf("value using**pp:%d\n",**pp);
    printf("address of **pp:%d\n",(void*)&**pp);
    return 0;
}