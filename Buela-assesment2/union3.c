#include<stdio.h>
union data{
    int i;
    float f;
    char str[20];
};
int main(){
    union data data;
data.i=10;
printf("data.i=%d\n",data.i);
data.f=220.5;
printf("data.f=%.2f\n",data.f);
return 0;
}