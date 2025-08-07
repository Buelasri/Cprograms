#include<stdio.h>
union data{
    int i;
    float f;
    char c;
};
int main(){
    union data d;
    d.i=1234;
    printf("integer:%d\n",d.i);
    d.f=3.14;
    printf("float:%.2f\n",d.f);
    d.c='A';
    printf("char:%c\n",d.c);
    return 0;
}