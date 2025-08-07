#include<stdio.h>
struct demo {
    char a;
    int b;
};
int main(){
    struct demo d;
    printf("size of structure:%zu bytes\n",sizeof(d));
    printf("address of a: %p\n",(void*)&d.a);
    printf("address of b:%p\n",(void*)&d.b);
    return 0;
}