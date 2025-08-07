#include<stdio.h>
union value{
    int i;
    float f;
};
struct data{
    int type;
    union value val;
};
int main(){
    struct data d1;

    d1.type=2;
    d1.val.i=42;
    d1.val.f=42.55;

    if(d1.type==1)

    printf("integer:%d\n",d1.val.i);

    else if(d1.type==2)

    printf("float:%.2f\n",d1.val.f);
    return 0;
}