#include<stdio.h>
union data{
    int i;
    float f;
    char c;
};
int main(){
    union data d;
    printf("size of union data:%zu bytes\n",sizeof(d));
}