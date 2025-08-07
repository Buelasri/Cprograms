#include<stdio.h>
union data{
    int i;
    float f;
    char c;
};
int main(){
    union data d;
    d.i=18;
    printf("integer:%d\n",d.i);
    d.f=6.634;
    printf("float:%.2f\n",d.f);
    d.c='B';
    printf("char:%c\n",d.c);
    return 0;
}