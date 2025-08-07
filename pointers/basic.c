#include<stdio.h>
int main(){
    int a=5;
    int*ptr;
    ptr=&a;

printf("value of a:%d\n",a);
printf("address of a:%p\n",(void*)&a);
printf("address stored in ptr:%p\n",(void*)ptr);
printf("value pointed by ptr:%d\n",*ptr);
return 0;
}