#include<stdio.h>
union data{
    int i;
    float f;
    char c;
};
int main(){
    union data d;
    d.i=100;
    printf("address of i:%p\n",(void)&d.i);
    printf("address of f:%p\n",(void)&d.f);
    printf("address of c:%p\n",(void)&d.c);
    return 0;
}