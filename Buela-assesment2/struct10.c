#include<stdio.h>
struct A{
    char a;
    int b;
    char c;
};
int main(){
    struct a obj;
    printf("size of char a: %lu bytes\n",sizeof(obj.a));
     printf("size of char b: %lu bytes\n",sizeof(obj.b));
      printf("size of char c: %lu bytes\n",sizeof(obj.c));
      printf("total size of struct A:%lu bytes\n",sizeof(obj));
      return 0;
}